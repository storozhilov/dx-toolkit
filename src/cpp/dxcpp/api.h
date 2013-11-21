/** \file
 *
 * \brief Automatically generated API method wrappers
 *
 * This file is automatically generated from a list of available routes on the
 * API server. Functions in this file take a remote object ID (when
 * appropriate) and an optional argument input_params (which can be supplied
 * either as stringified JSON or a JSON object). If input_params is not
 * provided, the JSON of an empty dict will be sent. Each function returns the
 * JSON that is returned by the API server.
 */

// ===> Do not modify this file by hand! <===
//
// This file is automatically generated by
// src/api_wrappers/generateCppAPIHWrappers.py. (Run make api_wrappers to
// update it.)

#ifndef DXCPP_API_H
#define DXCPP_API_H

#include "dxjson/dxjson.h"

namespace dx {

  JSON analysisAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON analysisAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON analysisDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON analysisDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON analysisRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON analysisRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON analysisSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON analysisSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON analysisTerminate(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON analysisTerminate(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appAddAuthorizedUsers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appAddAuthorizedUsers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appAddAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appAddAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appAddCategories(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appAddCategories(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appAddCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appAddCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appAddDevelopers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appAddDevelopers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appAddDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appAddDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appAddTags(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appAddTags(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appAddTagsWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appAddTagsWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appDelete(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appDelete(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appDeleteWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appDeleteWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appDescribe(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appDescribe(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appDescribeWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appDescribeWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appGet(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appGet(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appGetWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appGetWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appInstall(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appInstall(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appInstallWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appInstallWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appListAuthorizedUsers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appListAuthorizedUsers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appListAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appListAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appListCategories(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appListCategories(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appListCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appListCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appListDevelopers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appListDevelopers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appListDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appListDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appPublish(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appPublish(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appPublishWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appPublishWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appRemoveAuthorizedUsers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveAuthorizedUsers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appRemoveAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveAuthorizedUsersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appRemoveCategories(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveCategories(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appRemoveCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveCategoriesWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appRemoveDevelopers(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveDevelopers(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appRemoveDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveDevelopersWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appRemoveTags(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveTags(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appRemoveTagsWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appRemoveTagsWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appRun(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=false);
  JSON appRun(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=false);
  JSON appRunWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=false);
  JSON appRunWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=false);

  JSON appUninstall(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appUninstall(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appUninstallWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appUninstallWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appUpdate(const std::string &app_id_or_name, const std::string &input_params="{}", const bool retry=true);
  JSON appUpdate(const std::string &app_id_or_name, const dx::JSON &input_params, const bool retry=true);
  JSON appUpdateWithAlias(const std::string &app_name, const std::string &app_alias, const std::string &input_params="{}", const bool retry=true);
  JSON appUpdateWithAlias(const std::string &app_name, const std::string &app_alias, const dx::JSON &input_params, const bool retry=true);

  JSON appNew(const std::string &input_params="{}", const bool retry=false);
  JSON appNew(const dx::JSON &input_params, const bool retry=false);

  JSON appletAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletGet(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletGet(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletGetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletGetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletListProjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletListProjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletRename(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletRename(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletRun(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON appletRun(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON appletSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON appletSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON appletNew(const std::string &input_params="{}", const bool retry=false);
  JSON appletNew(const dx::JSON &input_params, const bool retry=false);

  JSON containerClone(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON containerClone(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON containerDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerDestroy(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerDestroy(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerListFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerListFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerMove(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON containerMove(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON containerNewFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerNewFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerRemoveFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerRemoveFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerRemoveObjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON containerRemoveObjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON containerRenameFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON containerRenameFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON fileAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileAddTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileAddTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileClose(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileClose(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileDownload(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileDownload(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileGetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileGetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileListProjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileListProjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileRemoveTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileRemoveTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileRename(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileRename(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileSetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileSetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileSetVisibility(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileSetVisibility(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileUpload(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON fileUpload(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON fileNew(const std::string &input_params="{}", const bool retry=false);
  JSON fileNew(const dx::JSON &input_params, const bool retry=false);

  JSON gtableAddRows(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableAddRows(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableAddTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableAddTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableClose(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableClose(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableGet(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableGet(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableGetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableGetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableListProjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableListProjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableNextPart(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableNextPart(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableRemoveTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableRemoveTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableRename(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableRename(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableSetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableSetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableSetVisibility(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON gtableSetVisibility(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON gtableNew(const std::string &input_params="{}", const bool retry=false);
  JSON gtableNew(const dx::JSON &input_params, const bool retry=false);

  JSON jobAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON jobAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON jobDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON jobDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON jobGetLog(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON jobGetLog(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON jobRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON jobRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON jobSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON jobSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON jobTerminate(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON jobTerminate(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON jobNew(const std::string &input_params="{}", const bool retry=false);
  JSON jobNew(const dx::JSON &input_params, const bool retry=false);

  JSON notificationsGet(const std::string &input_params="{}", const bool retry=true);
  JSON notificationsGet(const dx::JSON &input_params, const bool retry=true);

  JSON notificationsMarkRead(const std::string &input_params="{}", const bool retry=true);
  JSON notificationsMarkRead(const dx::JSON &input_params, const bool retry=true);

  JSON projectAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectClone(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON projectClone(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON projectDecreasePermissions(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectDecreasePermissions(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectDestroy(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectDestroy(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectInvite(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON projectInvite(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON projectLeave(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectLeave(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectListFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectListFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectMove(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON projectMove(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON projectNewFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectNewFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectRemoveFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectRemoveFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectRemoveObjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectRemoveObjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectRenameFolder(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON projectRenameFolder(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON projectSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectUpdate(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON projectUpdate(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON projectNew(const std::string &input_params="{}", const bool retry=false);
  JSON projectNew(const dx::JSON &input_params, const bool retry=false);

  JSON recordAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordAddTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordAddTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordClose(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordClose(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordGetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordGetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordListProjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordListProjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordRemoveTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordRemoveTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordRename(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordRename(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordSetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordSetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordSetVisibility(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON recordSetVisibility(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON recordNew(const std::string &input_params="{}", const bool retry=false);
  JSON recordNew(const dx::JSON &input_params, const bool retry=false);

  JSON systemFindAffiliates(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindAffiliates(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindApps(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindApps(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindDataObjects(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindDataObjects(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindExecutions(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindExecutions(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindAnalyses(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindAnalyses(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindJobs(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindJobs(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindProjects(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindProjects(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindUsers(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindUsers(const dx::JSON &input_params, const bool retry=true);

  JSON systemFindProjectMembers(const std::string &input_params="{}", const bool retry=true);
  JSON systemFindProjectMembers(const dx::JSON &input_params, const bool retry=true);

  JSON systemGreet(const std::string &input_params="{}", const bool retry=true);
  JSON systemGreet(const dx::JSON &input_params, const bool retry=true);

  JSON systemShortenURL(const std::string &input_params="{}", const bool retry=true);
  JSON systemShortenURL(const dx::JSON &input_params, const bool retry=true);

  JSON userDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON userDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON userUpdate(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON userUpdate(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON workflowAddStage(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowAddStage(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowAddTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowAddTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowAddTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowAddTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowClose(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowClose(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowDescribe(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowDescribe(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowGetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowGetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowIsStageCompatible(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowIsStageCompatible(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowListProjects(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowListProjects(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowMoveStage(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowMoveStage(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowOverwrite(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowOverwrite(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowRemoveStage(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowRemoveStage(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowRemoveTags(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowRemoveTags(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowRemoveTypes(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowRemoveTypes(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowRename(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowRename(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowRun(const std::string &object_id, const std::string &input_params="{}", const bool retry=false);
  JSON workflowRun(const std::string &object_id, const dx::JSON &input_params, const bool retry=false);

  JSON workflowSetDetails(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowSetDetails(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowSetProperties(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowSetProperties(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowSetStageInputs(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowSetStageInputs(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowSetVisibility(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowSetVisibility(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowUpdate(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowUpdate(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowUpdateStageExecutable(const std::string &object_id, const std::string &input_params="{}", const bool retry=true);
  JSON workflowUpdateStageExecutable(const std::string &object_id, const dx::JSON &input_params, const bool retry=true);

  JSON workflowNew(const std::string &input_params="{}", const bool retry=false);
  JSON workflowNew(const dx::JSON &input_params, const bool retry=false);

}
#include "dxcpp.h"

#endif
