#ifndef __IBUS_RIME_SETTINGS_H__
#define __IBUS_RIME_SETTINGS_H__

#include <glib.h>

// colors

#define RIME_COLOR_GLOW   0xffffff
#define RIME_COLOR_LIGHT  0xd4d4d4
#define RIME_COLOR_DARK   0x606060
#define RIME_COLOR_BLACK  0x000000
#define RIME_COLOR_LUNA   0xffff7f
#define RIME_COLOR_DEEP   0x0a3dea
#define RIME_COLOR_PURE   0x0a3dfa

struct ColorSchemeDefinition {
  const char* color_scheme_id;
  int text_color;
  int back_color;
};

// settings

struct IBusRimeSettings {
  gboolean embed_preedit_text;
  struct ColorSchemeDefinition* color_scheme;
};

struct IBusRimeSettings g_ibus_rime_settings;

void
ibus_rime_load_settings(IBusConfig* config);

void
ibus_rime_config_value_changed_cb(IBusConfig* config,
                                  const gchar* section,
                                  const gchar* name,
                                  GVariant* value,
                                  gpointer unused);

#endif
