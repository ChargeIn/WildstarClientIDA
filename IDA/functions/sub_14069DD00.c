#include "../winhttp.h"

//----- (000000014069DD00) ----------------------------------------------------
__int64 __fastcall sub_14069DD00(__int64 a1, _QWORD* a2)
{
	int v2; // edi
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64* v8; // rcx
	unsigned int v9; // ecx
	__int64 v10; // rcx
	int v11; // eax
	__int64* v12; // rcx
	int v13; // ecx
	__int64 v14; // rcx
	int v15; // eax
	__int64* v16; // rcx
	int v17; // ecx
	__int64 v18; // rcx
	int v19; // eax
	__int64* v20; // rcx
	__int64 v21; // [rsp+20h] [rbp-18h] BYREF
	int v22; // [rsp+28h] [rbp-10h]
	__int64 v23; // [rsp+40h] [rbp+8h] BYREF

	v2 = 0;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	result = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
	if ((_DWORD)result)
	{
		result = sub_1400FB720((__int64)a2, L"idPart", 3);
		if ((int)result >= 0)
		{
			v6 = *(_QWORD*)(a2[2] + 16i64);
			v7 = *(_DWORD*)(v6 - 8);
			v8 = (__int64*)(v6 - 16);
			if (v7 != 3)
			{
				if (v7 != 4 || !sub_14005AC80((char*)(*v8 + 32), (unsigned __int64*)&v23))
				{
					v9 = 0;
				LABEL_8:
					*(_QWORD*)(a2[2] + 16i64) -= 32i64;
					result = sub_140202860(v9);
					if (!result)
						return result;
					*(_DWORD*)a1 = *(_DWORD*)result;
					if ((int)sub_1400FB720((__int64)a2, L"idColor1", 3) < 0)
					{
					LABEL_16:
						if ((int)sub_1400FB720((__int64)a2, L"idColor2", 3) < 0)
							goto LABEL_23;
						v14 = *(_QWORD*)(a2[2] + 16i64);
						v15 = *(_DWORD*)(v14 - 8);
						v16 = (__int64*)(v14 - 16);
						if (v15 != 3)
						{
							if (v15 != 4 || !sub_14005AC80((char*)(*v16 + 32), (unsigned __int64*)&v23))
							{
								v17 = 0;
								goto LABEL_22;
							}
							v22 = 3;
							v16 = &v21;
							v21 = v23;
						}
						v17 = (int)*(double*)v16;
					LABEL_22:
						*(_QWORD*)(a2[2] + 16i64) -= 32i64;
						*(_DWORD*)(a1 + 8) = v17;
					LABEL_23:
						result = sub_1400FB720((__int64)a2, L"idColor3", 3);
						if ((int)result < 0)
							return result;
						v18 = *(_QWORD*)(a2[2] + 16i64);
						v19 = *(_DWORD*)(v18 - 8);
						v20 = (__int64*)(v18 - 16);
						if (v19 != 3)
						{
							if (v19 != 4 || !sub_14005AC80((char*)(*v20 + 32), (unsigned __int64*)&v23))
								goto LABEL_29;
							v22 = 3;
							v20 = &v21;
							v21 = v23;
						}
						v2 = (int)*(double*)v20;
					LABEL_29:
						result = a2[2];
						*(_QWORD*)(result + 16) -= 32i64;
						*(_DWORD*)(a1 + 12) = v2;
						return result;
					}
					v10 = *(_QWORD*)(a2[2] + 16i64);
					v11 = *(_DWORD*)(v10 - 8);
					v12 = (__int64*)(v10 - 16);
					if (v11 != 3)
					{
						if (v11 != 4 || !sub_14005AC80((char*)(*v12 + 32), (unsigned __int64*)&v23))
						{
							v13 = 0;
							goto LABEL_15;
						}
						v22 = 3;
						v12 = &v21;
						v21 = v23;
					}
					v13 = (int)*(double*)v12;
				LABEL_15:
					*(_QWORD*)(a2[2] + 16i64) -= 32i64;
					*(_DWORD*)(a1 + 4) = v13;
					goto LABEL_16;
				}
				v22 = 3;
				v8 = &v21;
				v21 = v23;
			}
			v9 = (int)*(double*)v8;
			goto LABEL_8;
		}
	}
	return result;
}
// 140B34B48: using guessed type wchar_t aIdpart_0[7];
// 140B34B58: using guessed type wchar_t aIdcolor1_0[9];
// 140B34D18: using guessed type wchar_t aIdcolor2_0[9];
// 140B34D30: using guessed type wchar_t aIdcolor3_0[9];

