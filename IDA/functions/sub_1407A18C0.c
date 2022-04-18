#include "../winhttp.h"

//----- (00000001407A18C0) ----------------------------------------------------
__int64 __usercall sub_1407A18C0@<xmm0>(int a1@<ecx>, _QWORD* a2@<rdx>){
    __int64 result; // xmm0_8
    int *v3; // rax
    __int64 v4; // rax
    __int64 v5; // rax
    __int64 v6; // rax
    __int64 v7; // rax
    __int64 v8; // rax
    __int64 v9; // rax
    int *v10; // rax
    __int64 v11; // rax
    __int64 v12; // rax
    int v13; // edx
    int v14; // ebx
    __int64(__fastcall **TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
    __int128 v16; // [rsp+28h] [rbp-40h]
    __int64(__fastcall **v17)(); // [rsp+40h] [rbp-28h] BYREF
    __int128 v18; // [rsp+48h] [rbp-20h]
    __int64 v19; // [rsp+80h] [rbp+18h] BYREF

    switch (a1) {
        case 0:
            HIDWORD(result) = 0;
            *(float *) &result = (float) *(int *) (a2[14] + 28i64);
            return result;
        case 1:
            return *(unsigned int *) (a2[14] + 108i64);
        case 2:
            return *(unsigned int *) (a2[14] + 112i64);
        case 3:
            v3 = (int *) a2[7];
            result = 0i64;
            if (v3)
                *(float *) &result = (float) *v3;
            return result;
        case 4:
            v4 = a2[8];
            if (!v4)
                goto LABEL_35;
            return COERCE_UNSIGNED_INT((float) *(int *) (v4 + 8));
        case 5:
            v6 = a2[8];
            if (!v6)
                goto LABEL_35;
            return COERCE_UNSIGNED_INT((float) *(int *) (v6 + 16));
        case 6:
            v7 = a2[8];
            if (!v7)
                goto LABEL_35;
            return COERCE_UNSIGNED_INT((float) *(int *) (v7 + 20));
        case 7:
            v8 = a2[8];
            if (!v8)
                goto LABEL_35;
            return COERCE_UNSIGNED_INT((float) *(int *) (v8 + 28));
        case 8:
            HIDWORD(result) = 0;
            *(float *) &result = (float) *(int *) (a2[14] + 176i64);
            return result;
        case 9:
            HIDWORD(result) = 0;
            *(float *) &result = (float) *(int *) (a2[14] + 180i64);
            return result;
        case 10:
            v10 = (int *) a2[10];
            result = 0i64;
            if (v10)
                *(float *) &result = (float) *v10;
            return result;
        case 11:
            v11 = a2[10];
            result = 0i64;
            if (v11)
                *(float *) &result = (float) *(int *) (v11 + 4);
            return result;
        case 12:
            v12 = a2[10];
            result = 0i64;
            if (v12)
                *(float *) &result = (float) *(int *) (v12 + 8);
            return result;
        case 13:
            goto LABEL_35;
        case 14:
            HIDWORD(result) = 0;
            v13 = *(_DWORD *) (a2[14] + 264i64);
            *(float *) &result = (float) (int) (
                    ((v13 & 4 | ((unsigned int) (v13 & 0x800 | ((unsigned __int16) (v13 & 0x400) >> 1)) >> 4)) >> 2) |
                    (2 * (v13 & 0x23 | (4 * (v13 & 0x1040 | (2 * (v13 & 0x416010)))))));
            return result;
        case 15:
            return *(unsigned int *) (a2[14] + 144i64);
        case 16:
            return *(unsigned int *) (a2[14] + 148i64);
        case 17:
            HIDWORD(result) = 0;
            *(float *) &result = (float) *(int *) (a2[14] + 304i64);
            return result;
        case 18:
            HIDWORD(result) = 0;
            *(float *) &result = (float) *(int *) (a2[14] + 316i64);
            return result;
        case 19:
            v5 = a2[8];
            if (!v5)
                goto LABEL_35;
            result = COERCE_UNSIGNED_INT((float) *(int *) (v5 + 12));
            break;
        case 20:
            v9 = a2[8];
            if (!v9)
                goto LABEL_35;
            result = COERCE_UNSIGNED_INT((float) *(int *) (v9 + 32));
            break;
        case 21:
            return *(unsigned int *) (a2[14] + 276i64);
        default:
            *(_QWORD *) &v16 = 0i64;
            TlsValue = &off_140B5E648;
            *((_QWORD *) &v16 + 1) = TlsGetValue(dwTlsIndex);
            TlsSetValue(dwTlsIndex, &TlsValue);
            v17 = TlsValue;
            v19 = 0x141E4C440i64;
            v18 = v16;
            v14 = sub_1401971E0(&dword_140C8B164, 24, &v19, &v17);
            TlsValue = &off_140B5E648;
            TlsSetValue(dwTlsIndex, *((LPVOID *) &v16 + 1));
            if (v14)
                DebugBreak();
        LABEL_35:
            result = 0i64;
            break;
    }
    return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B164: using guessed type _DWORD dword_140C8B164;