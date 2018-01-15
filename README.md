# Twitter

The Twitter module provides API integration with the Twitter micro
blogging service and API-compatible alternatives like Identi.ca.

Twitter module allows linking to Twitter accounts and listing 
tweets as views.

Three submodules (twitter_actions, twitter_post, twitter_signin) 
allow posting to twitter, executing actions/rules when tweeting 
or login with a Twitter account.

## Installation

OAuth module is required for all requests to the Twitter REST API 1.1. 
When you download the OAuth module, get the latest stable release 
available at https://github.com/backdrop-contrib/oauth

Once OAuth and Twitter have been enabled, go to 
admin/config/services/twitter and follow instructions in order
to provide your Twitter Application keys.

You can find further installation instructions at http://drupal.org/node/1346824

## Use

### How to use the username and hashtag input filters

 1. Go to admin/config/content/formats.
 2. Select the text format where you want to use the filters.
 3. At "Enabled filters" check the Twitter converters.

    After that, clear cache and try to create a page with the 
    following body: 

    "#backdropCMS @backdropCMS"

    The above links to a search in Twitter over the #backdropCMS tag 
    and also to the @backdropCMS profile.
    These filters are available when configuring a tweets View.

### How to post to Twitter

 1. Read the OAuth section to install and configure OAuth.
 2. Once OAuth has been configured, go to 
    admin/config/services/twitter/post and select from which
    node types a user may post to Twitter and the default message.
 3. Verify permissions at admin/people/permissions.
 4. Add a Twitter account and try to edit or post content.

 Further information can be found at http://drupal.org/node/1016584.

### How to sign in with Twitter

Users can sign in with Twitter by enabling the twitter_signin module.
The following scenarios have been contemplated so far:

+ A visitor logs in with his Twitter account and, once authenticated 
  at Twitter.com, he fills in his email in the Backdrop registration 
  form and receives an email to log in and set his account password.
  
+ An existing user signs in with Twitter and then logs in into his 
  Backdrop user account. This results in the Twitter account getting 
  related to the user account so next time Twitter sign in will work.
  
+ An existing user with an already configured Twitter account can
  log in automatically by clicking on the Sign in with Twitter button.


## License

This project is GPL v2 software. See the LICENSE.txt file 
in this directory for complete text.

## Current Maintainer for Backdrop

Graham Oliver (github.com/Graham-72/)


## Credits

This is a port of the Drupal project Twitter, version 7.x-5.11.

### Drupal Maintainers

+ Juan Pablo Novillo Requena (juampy)
+ Chris Burgess (xurizaemon)
+ michaek
+ James Walker (walkah)
+ Jeff Eaton (eaton)
