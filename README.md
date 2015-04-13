# Persistent Update API demo distribution #
-------------------------------------------

This is a Drupal distribution for the purposes of demonstrating the [Persistent
Update API](https://drupal.org/project/persistent_update) module.



## Building / Installation ##

[Drush](https://github.com/drush-ops/drush) is required to build the
distribution, using the following command:

```
drush make https://raw.githubusercontent.com/Realityloop/pu-demo/7.x-1.x/stub.make pu_demo-7.x-1.x
```

After the distribution is built, point your webserver at the directory and
install as per standard Drupal instructions, making sure to use the __Persistent
Update API demo__ installation profile.
