core = 7.x
api = 2



; Defaults

defaults[projects][subdir] = contrib
defaults[projects][type] = module



; Modules

projects[bad_judgement][version] = 1.0-rc39

projects[ctools][version] = 1.7

projects[devel][version] = 1.5

projects[features][download][revision] = c867541
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[persistent_update][version] = 1.0

projects[random_updates][download][url] = http://git.drupal.org/sandbox/deciphered/2469795.git
projects[random_updates][download][revision] = 885fc58

projects[strongarm][version] = 2.0

projects[views][version] = 3.10
