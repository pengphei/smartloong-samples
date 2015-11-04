#
# Copyright (C) 2015 Focalcrest, Inc.
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

Import('genv')

out_path = "#out"

# smartloong base
base_script = "src/SConscript"
base_files = genv.SConscript(base_script)
genv.Install(out_path, base_files)

# blind sample
app_script = "app/SConscript"
app_files = genv.SConscript(app_script)
genv.Install(out_path, app_files)


