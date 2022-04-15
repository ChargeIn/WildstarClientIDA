#include "../winhttp.h"

//----- (0000000140478FD0) ----------------------------------------------------
__int64 __fastcall sub_140478FD0(_QWORD* a1, int a2)
{
	int v3; // r15d
	__int64 v4; // rbp
	__int64 v5; // rcx
	int* v6; // rdi
	_QWORD* v7; // r14
	__int64 result; // rax
	wchar_t* v9; // rsi
	unsigned __int64 v10; // rax
	__int64 v11; // rcx
	__int64* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+2Ch] [rbp-2Ch]
	__int64 v20; // [rsp+34h] [rbp-24h]
	int v21; // [rsp+3Ch] [rbp-1Ch]

	v3 = 0;
	if (qword_140C65970)
	{
		v4 = *(int*)(qword_140C65970 + 8);
		if ((int)v4 < 4)
		{
			if (a2)
			{
				v5 = a1[790];
				if (v5 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 944i64))(v5))
				{
				LABEL_19:
					v16 = a1[733];
					if (v16)
					{
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v16 + 896i64))(v16, 1i64, a1[790]);
						return (unsigned int)v3;
					}
				}
			}
			else
			{
				v6 = (int*)a1[801];
				if (*((_BYTE*)v6 + 4) && *((_BYTE*)v6 + 11))
				{
					v7 = a1 + 791;
					result = sub_1407E6AF0(a1 + 791, a1[801], 0x48ui64);
					if (!(_DWORD)result)
						return result;
					v9 = *(wchar_t**)(a1[3] + 256i64);
					if (!v9)
					{
						v9 = (wchar_t*)*((_QWORD*)v6 + 3);
						if (*((_BYTE*)v6 + 12))
						{
							v10 = *v6;
							if ((unsigned int)v10 <= 0x3E && (v11 = 0x4E38000000000000i64, _bittest64(&v11, v10)))
								v9 = off_140B03988[v4];
							else
								v9 = off_140B03968[v4];
						}
					}
					sub_140479200((__int64)a1);
					if (v9)
					{
						v3 = (*(__int64(__fastcall**)(_QWORD, wchar_t*, _QWORD*, _QWORD))(**(_QWORD**)(qword_140C65898 + 29264)
							+ 40i64))(
								*(_QWORD*)(qword_140C65898 + 29264),
								v9,
								a1 + 790,
								0i64);
						if (v3 >= 0)
						{
							v12 = (__int64*)a1[801];
							v17 = 150i64;
							v13 = *v12;
							v19 = 0i64;
							v20 = 0i64;
							v18 = 1065353216;
							*v7 = v13;
							v14 = v12[1];
							v21 = 0;
							v7[1] = v14;
							v7[2] = v12[2];
							v7[3] = v12[3];
							v7[4] = v12[4];
							v15 = a1[790];
							v7[5] = v12[5];
							v7[6] = v12[6];
							v7[7] = v12[7];
							v7[8] = v12[8];
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v15 + 584i64))(v15, 0i64, &v17);
							goto LABEL_19;
						}
					}
				}
				else
				{
					sub_140479200((__int64)a1);
				}
			}
			return (unsigned int)v3;
		}
	}
	sub_140479200((__int64)a1);
	return 0i64;
}
// 140B03968: using guessed type wchar_t *off_140B03968[8];
// 140B03988: using guessed type wchar_t *off_140B03988[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

