<h1>Twitter</h1>

<h2>Introduction</h2>

The Twitter module provides API integration with the Twitter micro blogging service and API-compatible alternatives like Identi.ca.

Twitter module allows listing tweets in blocks or pages. Its integration with Views opens the door to all sorts of formatting (ie. as an automatic slideshow with views_slideshow). It also
provides useful input filters to easily link Twitter accounts and searches within text.

Twitter's submodules (twitter-actions, twitter-post, twitter-signin) allow posting to twitter, executing actions/rules when tweeting or login with a Twitter account.

<h2>Installation</h2>

OAuth module is required for all requests to the Twitter REST API 1.1. When you download the OAuth module, get the latest stable release available at https://github.com/backdrop-contrib/oauth

Once OAuth and Twitter have been enabled, go to admin/config/services/twitter and follow instructions in order
to provide your Twitter Application keys.

You can find further installation instructions at http://drupal.org/node/1346824

<h2>How to use the username and hashtag input filters</h2>

1. Go to admin/config/content/formats.
2. Select the text format where you want to use the filters.
3. At "Enabled filters" check the Twitter converters.

After that, clear cache and try to create a page with the following body:

#backdropCMS @backdropCMS 

The above links to a search in Twitter over the #backdropCMS tag and a to the @backdropCMS profile.
These filters are avilable when configuring a tweets Views.

<h2>How to post to Twitter</h2>

1. Read the OAuth section to install and configure OAuth.
2. Once OAuth has been configured, go to admin/config/services/twitter/post and select from which
   node types a user may post to Twitter and the default message.
3. Verify permissions at admin/people/permissions.
4. Add a Twitter account and try to edit or post content.

Further information can be found at http://drupal.org/node/1016584.

<h2>How to sign in with Twitter</h2>

Existing and new users can sign in with Twitter by enabling the twitter_signin module. The following scenarios are being contemplated so far:

* A visitor logs in with his Twitter account and, once authenticated at Twitter.com, he fills in his email in the Backdrop registration form and receives an email to log in and set his account password.
* An existing user signs in with Twitter and then logs in into his Backdrop user account. This results in the Twitter account getting related to the user account so next time Twitter sign in will work.
* An existing user with an already configured Twitter account can log in automatically by clicking on the Sign in with Twitter button.


<h2>Status</h2>

This Backdrop version of a Drupal contributed module is under development.


<h2>License</h2>

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

<h2>Current Maintainers</h2>

<h3>For Drupal:</h3>
Juan Pablo Novillo Requena (juampy),
Chris Burgess (xurizaemon),
michaek,
James Walker (walkah),
Jeff Eaton (eaton)

<h3>Port to Backdrop:</h3>
Graham Oliver github.com/Graham-72








