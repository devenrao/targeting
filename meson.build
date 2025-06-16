project(
  'targeting',
  ['c', 'cpp'],
  version: '0.1',
  meson_version: '>=1.0.1',
  default_options: [
    'warning_level=3',
    'cpp_std=c++23',
  ]
)

cpp = meson.get_compiler('cpp')
# Include libfdt
subdir('dtc/libfdt')

targeting_sources = files(
  #'targeting/xmltohb/mapsystemattrsize.C',
  #'targeting/xmltohb/errludattribute_gen.C',
  #'targeting/xmltohb/attrsizesdata.C',
  #'targeting/xmltohb/attributestrings.C',
  #'targeting/xmltohb/errludtarget.C',
  #'targeting/xmltohb/mapattrmetadata.C',
  #'targeting/xmltohb/targAttrIdToName.C',
  #'targeting/xmltohb/persistrwattrcheck.C',
  #'targeting/test/testtargeting.C',
  'targeting/common/targutilbase.C',
  'targeting/common/attributeTank.C',
  'targeting/common/entitypath.C',
  'targeting/common/utilFilter.C',
  'targeting/common/hbrt_target.C',
  'targeting/common/mfgFlagAccessors.C',
  'targeting/common/DCMUtils.C',
  'targeting/common/predicates/predicatehwaschanged.C',
  'targeting/common/predicates/predicatebase.C',
  'targeting/common/predicates/predicateisnonfunctional.C',
  'targeting/common/predicates/predicatehwas.C',
  'targeting/common/predicates/predicatectm.C',
  'targeting/common/predicates/predicatepostfixexpr.C',
  'targeting/common/predicates/predicateisfunctional.C',
  'targeting/common/targetservice.C',
  'targeting/common/associationmanager.C',
  'targeting/common/iterators/targetiterator.C',
  'targeting/common/iterators/rangefilter.C',
  'targeting/common/iterators/rawtargetiterator.C',
  'targeting/common/util.C',
  'targeting/common/target.C'
)

targeting_inc = include_directories(
  'targeting', 
  'targeting/common',
  'targeting/adapters',
  )

# Build the library
targeting_lib = static_library(
  'targeting',
  targeting_sources,
  include_directories: [libfdt_inc, targeting_inc],
  cpp_args: ['-x', 'c++'],  # force compiler to treat files as C++
  dependencies: libfdt_dep,
)

# Now build the executable with main.C and link to the library
executable(
  'targeting-app',
  'main.C',
  link_with: targeting_lib,
  include_directories: [libfdt_inc],
  dependencies: libfdt_dep,
)
