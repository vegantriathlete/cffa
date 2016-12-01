(function ($) {

/**
 * This script implements general sitewide customizations 
 */
Drupal.behaviors.fileLinkNewTab = {
  attach: function (context) {
    // Hide the Show row weights link
    $('.field-name-field-supporting-documents a').attr('target', '_blank');
  }
};

})(jQuery);
