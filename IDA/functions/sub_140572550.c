#include "../winhttp.h"

//----- (0000000140572550) ----------------------------------------------------
__int64 __fastcall sub_140572550(__int64 a1, unsigned int *a2)
{
    __int64 result; // rax
    _QWORD *v3; // rbx
    __int64 v4; // rcx

    result = sub_1404804A0(qword_140C65970, *a2, 18i64);
    v3 = (_QWORD *)result;
    if ( result )
    {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 40i64))(result);
        if ( (_DWORD)result )
        {
            result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v3 + 128i64))(v3, 1347241296i64);
            if ( result )
            {
                *(_QWORD *)(result + 24) = 0i64;
                *(_DWORD *)(result + 32) = 0;
                v4 = *(_QWORD *)(result + 16);
                if ( *(_DWORD *)(v4 + 20) )
                {
                    if ( *(_DWORD *)(v4 + 16) )
                        sub_14056B870(result);
                }
                return Apollo_LUAEvent(
                        *(_QWORD *)(qword_140C65898 + 29504),
                        "PlayerPathExplorerPowerMapFailed",
                        &unk_1409ED374,
                        v3[6]);
            }
        }
    }
    return result;
}