#include "../winhttp.h"

//----- (00000001405A51A0) ----------------------------------------------------
__int64 __fastcall sub_1405A51A0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	unsigned int v5; // r8d
	int v6; // eax
	unsigned int v7; // edi
	__int64 v8; // rbx
	int v9; // edi
	__m128* v10; // rax
	__int64* v11; // rdi
	int v12; // ebx
	__int32 v14; // xmm0_4
	__int64 v15; // rax
	__int64 v16; // rbx
	int v17; // eax
	__int64 v18; // rdx
	int v19; // eax
	__int64 v20; // rcx
	unsigned int* v21; // rbx
	__int64 v22; // rdi
	_DWORD* v23; // rax
	__int64 v24; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v26; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v27)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v28; // [rsp+58h] [rbp-A8h]
	int v29[8]; // [rsp+70h] [rbp-90h] BYREF
	__int16 v30; // [rsp+90h] [rbp-70h]
	int v31; // [rsp+94h] [rbp-6Ch]
	int v32; // [rsp+C4h] [rbp-3Ch]
	int v33; // [rsp+C8h] [rbp-38h]
	__int64 v34; // [rsp+168h] [rbp+68h] BYREF
	__int64 v35; // [rsp+170h] [rbp+70h] BYREF

	sub_1407E4830(v29, 0i64, 0xC8ui64);
	v5 = *(_DWORD*)(a2 + 4);
	v30 = *(_WORD*)(a2 + 20);
	v29[1] = *(_DWORD*)(a2 + 8);
	v6 = *(_DWORD*)(a2 + 12);
	v29[0] = v5;
	v29[2] = v6;
	v29[6] = *(_DWORD*)a2;
	v29[7] = *(_DWORD*)(a2 + 16);
	v31 = *(_DWORD*)(a2 + 24);
	v33 = *(_DWORD*)(a2 + 72);
	v32 = *(_DWORD*)(a2 + 76);
	if (!qword_140C65B70)
	{
		v7 = 1;
	LABEL_4:
		*(_QWORD*)&v26 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v27 = TlsValue;
		v28 = v26;
		sub_14018D540(&v34, (__int64)L"%d", v7);
		v8 = v34;
		v35 = 0x141E1B5B0i64;
		v9 = sub_1401971E0(&dword_140C8AF9C, 24, &v35, v34, &v27);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
		if (v9)
			DebugBreak();
		return 0i64;
	}
	v7 = sub_140561780(v4, v29, v5, 0i64);
	if (v7)
		goto LABEL_4;
	v10 = (__m128*)sub_140561C30(qword_140C65B70, *(_DWORD*)a2);
	v11 = (__int64*)v10;
	if (v10)
	{
		v14 = *(_DWORD*)(a2 + 40);
		v10[22] = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 28), (__m128) * (unsigned int*)(a2 + 36)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 32), (__m128)0i64));
		v10[23].m128_i32[0] = v14;
		sub_14053D890((__int64)v10, *(_BYTE*)(a2 + 44), *(_QWORD*)(a2 + 48), *(_BYTE*)(a2 + 56), *(_QWORD*)(a2 + 64));
		sub_14053DD00((__int64)v11);
		if (*(_QWORD*)(a1 + 120))
		{
			v15 = *(_QWORD*)(a1 + 25744);
			if (v15)
			{
				if (*(_DWORD*)(a2 + 16) == *(_DWORD*)(v15 + 8))
				{
					sub_14046AFC0(*(_QWORD*)(a1 + 120), v11[39], 0i64);
					v16 = *(_QWORD*)(v11[39] + 56);
					if (v16)
					{
						v17 = (*(__int64(__fastcall**)(__int64*))(*v11 + 8))(v11);
						v18 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
						if (v18)
						{
							while (*(_DWORD*)(v18 + 8) != v17)
							{
								v18 = *(_QWORD*)(v18 + 136);
								if (!v18)
									return 0i64;
							}
							v19 = (*(__int64(__fastcall**)(__int64*))(*v11 + 8))(v11);
							v20 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
							if (v20)
							{
								while (*(_DWORD*)(v20 + 4) != 1 || v19 != *(_DWORD*)(v20 + 12))
								{
									v20 = *(_QWORD*)(v20 + 136);
									if (!v20)
										goto LABEL_26;
								}
								sub_1407A0390(v20);
							}
						LABEL_26:
							v21 = (unsigned int*)(v16 + 4);
							v22 = 3i64;
							do
							{
								if (*v21)
								{
									v23 = (_DWORD*)sub_14023DC80(*v21);
									if (v23)
									{
										v24 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
										if (v24)
										{
											while (*(_DWORD*)(v24 + 4) != 2 || *v23 != *(_DWORD*)(v24 + 12))
											{
												v24 = *(_QWORD*)(v24 + 136);
												if (!v24)
													goto LABEL_35;
											}
											sub_1407A0390(v24);
										}
									}
								}
							LABEL_35:
								++v21;
								--v22;
							} while (v22);
						}
					}
				}
			}
		}
		return 0i64;
	}
	*(_QWORD*)&v26 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v27 = TlsValue;
	v28 = v26;
	v34 = 0x141E1B660i64;
	v12 = sub_1401971E0(&dword_140C8AF98, 24, &v34, &v27);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
	if (v12)
		DebugBreak();
	return 2147500037i64;
}
// 1405A5221: variable 'v4' is possibly undefined
// 140B4F534: using guessed type wchar_t aD_27[3];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C8AF98: using guessed type _DWORD dword_140C8AF98;
// 140C8AF9C: using guessed type _DWORD dword_140C8AF9C;

