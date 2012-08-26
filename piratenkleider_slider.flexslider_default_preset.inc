<?php
/**
 * @file
 * piratenkleider_slider.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function piratenkleider_slider_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slider';
  $preset->title = 'slider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'slider';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 1,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['slider'] = $preset;

  return $export;
}
