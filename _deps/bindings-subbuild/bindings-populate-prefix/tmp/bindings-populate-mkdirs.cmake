# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-src")
  file(MAKE_DIRECTORY "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-src")
endif()
file(MAKE_DIRECTORY
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-build"
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix"
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/sebas/GDmodding/HideMenuUI/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
