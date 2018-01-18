project('photon-aerobot', 'c', default_options : ['c_std=c99'])

modules_src = [
  'modules/photon/px4_autogen/Px4_autogen.c',
  'modules/photon/px4_autogen/px4_autogen.decode',
  'modules/photon/px4_autogen/mod.toml',
  'modules/photon/esc/esc.decode',
  'modules/photon/esc/mod.toml',
  'modules/photon/esc/Stub.c',
  'modules/photon/px4/px4.decode',
  'modules/photon/px4/Px4.c',
  'modules/photon/px4/mod.toml',
  'modules/photon/usm/mod.toml',
  'modules/photon/usm/usm.decode',
  'modules/aerobot/udp/mod.toml',
  'modules/aerobot/udp/udp.decode',
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
photon_opts += 'project_prefix=' + meson.current_source_dir()
photon_opts += 'additional_depends=' + mod_opt
photon_opts += 'targets=[\'cvm\', \'fcu\']'
photon_opts += 'use_stubs=' + get_option('use_stubs').to_string()
photon_opts += 'log_level=' + get_option('log_level')

photon_mod = subproject('photon', default_options : photon_opts)
photon_dep = photon_mod.get_variable('photon_dep')
