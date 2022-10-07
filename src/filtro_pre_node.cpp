#include "filtros_carlos/filtro_pre.h"

#include <ros/ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "filtro_preprocesado");
  ros::NodeHandle nodeHandle("~");
  bool success;
  filtro_pre::filtro_pre preprocesado(nodeHandle, success);
  if (success) ros::spin();
  return 0;
}