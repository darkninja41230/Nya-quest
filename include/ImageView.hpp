// OurClass.hpp
#pragma once

#include "custom-types/shared/types.hpp"
#include "custom-types/shared/macros.hpp"
#include "Gif.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "HMUI/ImageView.hpp"
#include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/CanvasRenderer.hpp"
#include "UnityEngine/Renderer.hpp"
#include "UnityEngine/Material.hpp"
#include <functional>

DECLARE_CLASS_CODEGEN(NyaUtils, ImageView, UnityEngine::MonoBehaviour,
  public:
    
    DECLARE_CTOR(ctor);
    DECLARE_DTOR(dtor);


    DECLARE_INSTANCE_FIELD(HMUI::ImageView*, imageView);
    DECLARE_INSTANCE_FIELD(StringW, lastImageURL);
    DECLARE_INSTANCE_FIELD(StringW, tempName);
    DECLARE_INSTANCE_FIELD(bool, autoNyaRunning);
    DECLARE_INSTANCE_FIELD(bool, autoNyaNewImage);
    DECLARE_INSTANCE_METHOD(void, OnEnable);
    DECLARE_INSTANCE_METHOD(void, OnDisable);
    DECLARE_INSTANCE_FIELD(bool, isNSFW);
    
    void GetImage(std::function<void(bool success)> finished);
    void SaveImage();
    bool HasImageToSave();
    void SetErrorImage();
    custom_types::Helpers::Coroutine AutoNyaCoro();
)