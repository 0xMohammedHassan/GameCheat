// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme
#include <metahost.h>
#pragma comment(lib, "MSCorEE.lib")

#import "C:\Windows\Microsoft.NET\Framework\v2.0.50727\mscorlib.tlb" raw_interfaces_only \
    high_property_prefixes("_get","_put","_putref")		\
    rename("ReportEvent", "InteropServices_ReportEvent")
using namespace mscorlib;