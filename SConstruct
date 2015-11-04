#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import os

platform = ARGUMENTS.get('platform','mipsel')

EXE_PATH = ''
PREFIX = ''
STAGING_DIR = ''

if platform == 'mipsel':
    EXE_PATH = '../buildroot/output/host/usr/bin'
    PREFIX = EXE_PATH+ '/mips-linux-gnu-'
else:
    pass

genv = Environment()

genv["CC"] = PREFIX + 'gcc'
genv["CXX"] = PREFIX + 'g++'
genv["AS"] = PREFIX + 'gcc'
genv["AR"] = PREFIX + 'ar'
genv["LINK"] = PREFIX + 'gcc'
genv["OBJCOPY"] = PREFIX + 'objcopy'
genv["NM"] = PREFIX + 'nm'
genv["platform"] = platform
genv["ENV"] = os.environ

genv.PrependENVPath ('PATH', EXE_PATH)

if platform == 'mipsel':
    genv["ENV"]["STAGING_DIR"] = STAGING_DIR

Export("genv")

script = 'SConscript'
genv.SConscript(script, variant_dir="build")
