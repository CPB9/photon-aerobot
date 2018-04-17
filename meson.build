project('photon-aerobot', 'c', default_options : ['c_std=c99'])

cfg = configuration_data()

cfg.set('PHOTON_ROOT', join_paths(meson.source_root(), 'subprojects/photon'))

if meson.is_subproject()
  cfg.set('AEROBOT_ROOT', join_paths(meson.source_root(), 'subprojects/photon-aerobot'))
else
  cfg.set('AEROBOT_ROOT', meson.source_root())
endif

configure_file(
  input : 'project-meson.toml.in',
  output : 'project-meson.toml',
  configuration : cfg,
)

modules_src = [
  'modules/aerobot/udp/mod.toml',
  'modules/aerobot/udp/udp.decode',
  'modules/photon/powerfan/mod.toml',
  'modules/photon/powerfan/powerfan.decode',
  'modules/photon/powerfan/Stub.c',
  'modules/photon/px4_autogen/mod.toml',
  'modules/photon/px4_autogen/px4_autogen.decode',
  'modules/photon/px4_autogen/Px4_autogen.c',
  'modules/photon/esc/mod.toml',
  'modules/photon/esc/Stub.c',
  'modules/photon/esc/esc.decode',
  'modules/photon/px4/mod.toml',
  'modules/photon/px4/Px4.c',
  'modules/photon/px4/px4.decode',
  'modules/photon/powercom/mod.toml',
  'modules/photon/powercom/Stub.c',
  'modules/photon/powercom/powercom.decode',
]

photon_opts = []

mod_opt = '['

foreach m : modules_src
  mod_opt += '\''
  mod_opt += join_paths(meson.current_source_dir(), m)
  mod_opt += '\','
endforeach

mod_opt += ']'

photon_opts += 'project=project-meson.toml'
photon_opts += 'project_prefix=' + meson.current_build_dir()
photon_opts += 'additional_depends=' + mod_opt
photon_opts += 'targets=[\'cvm\', \'fcu\']'
photon_opts += 'use_stubs=' + get_option('use_stubs').to_string()
photon_opts += 'log_level=' + get_option('log_level')
photon_opts += 'target_tests=' + get_option('target_tests').to_string()

photon_mod = subproject('photon', default_options : photon_opts)
photon_dep = photon_mod.get_variable('photon_dep')
gen_src_dep = photon_mod.get_variable('gen_src_dep')
photon_target_cvm_lib = photon_mod.get_variable('photon_target_cvm_lib')
photon_target_cvm_dep = [photon_mod.get_variable('photon_target_cvm_dep'), gen_src_dep]
photon_target_fcu_lib = photon_mod.get_variable('photon_target_fcu_lib')
photon_target_fcu_dep = [photon_mod.get_variable('photon_target_fcu_dep'), gen_src_dep]
