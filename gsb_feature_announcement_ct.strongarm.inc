<?php
/**
 * @file
 * gsb_feature_announcement_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_announcement_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_announcement';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_announcement';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_announcement';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__announcement';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => TRUE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => TRUE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => TRUE,
      ),
      'expanded' => array(
        'custom_settings' => TRUE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
      'homepage_school_news' => array(
        'custom_settings' => TRUE,
      ),
      'seed_research_project' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_ctas' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_one' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_director' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_desc' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_intro' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_related' => array(
        'custom_settings' => FALSE,
      ),
      'page_featured_programs' => array(
        'custom_settings' => FALSE,
      ),
      'featured_program' => array(
        'custom_settings' => FALSE,
      ),
      'program_director' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_leadership' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_one' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_teaching_programs' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_faculty' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_who_should_attend' => array(
        'custom_settings' => FALSE,
      ),
      'guest_speakers_advisors' => array(
        'custom_settings' => FALSE,
      ),
      'program_contact' => array(
        'custom_settings' => FALSE,
      ),
      'program_explore_other' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '15',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'gsb_announcement_school_listing_entity_view_1' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'news_listing' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'idea_story_related' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'homepage_school_news' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'gsb_media_inquiries' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'idea_story_related' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'alumni_featured_content' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'homepage_school_news' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'gsb_media_toolkit' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'alumni_featured_content' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'compact' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'expanded' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'news_listing' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'homepage_school_news' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_announcement';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_announcement';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_announcement';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_announcement';
  $strongarm->value = '0';
  $export['node_preview_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_announcement';
  $strongarm->value = 0;
  $export['node_submitted_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_announcement_pattern';
  $strongarm->value = 'newsroom/school-news/[node:field_pathauto_title_alias]';
  $export['pathauto_node_announcement_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_announcement';
  $strongarm->value = 0;
  $export['workbench_access_node_type_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_announcement';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_announcement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_announcement';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_announcement'] = $strongarm;

  return $export;
}
