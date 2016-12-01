(function ($) {

/**
 * This script implements customizations to the
 * Grant Application creation interface
 */
Drupal.behaviors.grantApplication = {
  attach: function (context) {
    // Hide the Show row weights link
    $('.tabledrag-toggle-weight-wrapper').hide();
    // Move to the next horizontal tab pane when clikcing the Next button
    $('#next-button').click(hTabIncrement);
  }
};

function hTabIncrement() {
  var $currentTab = $('.horizontal-tab-button.selected');
  var currentTabClasses = $currentTab[0].className;
  var lastTabClassIndex = currentTabClasses.search('last');
  var lastTab = false;
  if (lastTabClassIndex != -1) {
    lastTab = true;
  }
  var searchString = 'horizontal-tab-button-';
  var tabNumberIndex = currentTabClasses.search(searchString);
  var currentTabNumber = currentTabClasses.substr(tabNumberIndex + searchString.length, 1);
  toggleTabSettings(searchString, currentTabNumber, lastTab);
  $('html, body').animate({ scrollTop: 250 }, 500);
}

function toggleTabSettings(searchString, currentTabNumber, lastTab) {
  var $tabPanes = $('.horizontal-tabs-panes .horizontal-tabs-pane');
  console.log('number of tab panes: ' + $tabPanes.length);
  if (lastTab) {
    nextTabNumber = 0;
  }
  else {
    nextTabNumber = parseInt(currentTabNumber, 10);
    ++nextTabNumber;
  }
  $('.' + searchString + currentTabNumber).toggleClass('selected');
  $('.' + searchString + nextTabNumber).toggleClass('selected');
  $($tabPanes[currentTabNumber]).toggleClass('horizontal-tab-hidden');
  $($tabPanes[nextTabNumber]).toggleClass('horizontal-tab-hidden');
}

})(jQuery);
