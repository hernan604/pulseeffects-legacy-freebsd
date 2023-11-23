#ifndef GATE_PRESET_HPP
#define GATE_PRESET_HPP

#include "plugin_preset_base.hpp"

class GatePreset : public PluginPresetBase {
 public:
  GatePreset();

  void write(PresetType preset_type, boost::property_tree::ptree& root) override;
  void read(PresetType preset_type, boost::property_tree::ptree& root) override;

 private:
  Glib::RefPtr<Gio::Settings> input_settings, output_settings;

  void save(boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
  void load(boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
};

#endif
