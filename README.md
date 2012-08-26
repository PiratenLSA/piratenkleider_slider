# Piratenkleider Slider
Slider für das Piratenkleider Drupal Theme

## Lizenz
[GNU General Public License, Version 2](http://www.gnu.org/licenses/old-licenses/gpl-2.0)

## Installation
Einfach per Git das Repository "clonen" bzw. herunterladen. Den Ordner ggf. in
"piratenkleider_slider" umbenennen und nach "/sites/all/modules/" verschieben.

## Abhängigkeiten
- ctools
- features
- field_sql_storage
- flexslider
- flexslider_views_slideshow
- image
- views

## Erklärung
Der Slider wurde nicht fest in das Piratenkleider Drupal Theme eingebaut - es
bietet nur die CSS Optionen. Hierzu wird am besten das Modul
[Flex Slider](http://drupal.org/project/flexslider) benutzt. Mithilfe der
"FlexSlider Views Slideshow" kann eine "Ansicht" erstellt und diese als Block
auf der Startseite als Block eingebunden werden.

Da die manuelle Konfiguration für den Anfänger zu aufwendig ist, wurde dieses
"Feature"-Modul erstellt, das das benötigte "Feld" sowie die "Ansicht"
bereitstellt.

Nach dem aktivieren muss nur noch der Block "View: Slideshow" zur Region
"slideshow (frontpage only)" hinzugefügt werden. Es wurde automatisch das Feld
"sliderimage" dem Inhaltstyp "Artikel" hinzugefügt. Dort kann das Bild, welches
im Slider angezeigt werden soll hochgeladen werden.

**Achtung:**
Nicht vergessen die flexslider library herunterzuladen (siehe Statusbericht) der
eigenen Webseite.
