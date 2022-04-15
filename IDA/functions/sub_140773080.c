#include "../winhttp.h"

//----- (0000000140773080) ----------------------------------------------------
__int64 __fastcall sub_140773080(__m128* a1, __m128* a2, float a3, float a4, __int64 a5)
{
	__int64 result; // rax
	unsigned __int64 v8; // rdi
	__int64 v9; // r14
	__int64 v10; // rbx
	__m128* v11; // rbx
	__m128* v12; // rax
	__int64 v13; // rax
	float v14; // xmm4_4
	__m128* v15; // rax
	unsigned __int64 v16; // rdx
	__m128 v17; // [rsp+50h] [rbp-A8h] BYREF
	__m128 v18; // [rsp+60h] [rbp-98h] BYREF
	__int128 v19; // [rsp+70h] [rbp-88h] BYREF
	__int128 v20; // [rsp+80h] [rbp-78h] BYREF
	char v21[16]; // [rsp+90h] [rbp-68h] BYREF
	__m128 v22; // [rsp+A0h] [rbp-58h] BYREF
	float v23; // [rsp+B0h] [rbp-48h]
	float v24; // [rsp+B4h] [rbp-44h]
	void* retaddr; // [rsp+F8h] [rbp+0h] BYREF
	float v26; // [rsp+110h] [rbp+18h] BYREF
	int v27; // [rsp+118h] [rbp+20h] BYREF

	result = (__int64)&retaddr;
	v26 = a3;
	v8 = 0i64;
	a1[2] = *a2;
	a1[1].m128_f32[0] = a4;
	if (a1[50].m128_u64[1])
	{
		v9 = a5;
		do
		{
			result = a1[50].m128_i64[0];
			v10 = *(_QWORD*)(result + 8 * v8);
			if (*(_DWORD*)(v10 + 216))
			{
				v11 = *(_DWORD*)(v10 + 220) ? *(__m128**)(v10 + 104) : *(__m128**)(v10 + 96);
				if (v11)
				{
					v27 = 0;
					v26 = 0.0;
					sub_140770FC0(v11, a2, 0.0, a4, v9);
					v12 = (__m128*)(*(__int64(__fastcall**)(__m128*, char*))(v11->m128_u64[0] + 16))(v11, v21);
					result = (__int64)sub_1407711C0(&v17, v12, a2, 0.0, LODWORD(a4), v9, &v26, (float*)&v27);
					if (v26 == 0.0 || (v11[21].m128_i8[8] & 2) == 0)
					{
						result = v11[21].m128_u32[2];
						if ((result & 0x10) != 0)
						{
							v13 = 2i64;
						LABEL_16:
							v14 = flt_140B4F258[v13];
							v15 = v11 + 10;
							v22.m128_f32[0] = v17.m128_f32[0] - v14;
							v22.m128_f32[1] = v17.m128_f32[1] - v14;
							v23 = v14 + v17.m128_f32[0];
							v24 = v14 + v17.m128_f32[1];
							if (!v11[21].m128_i32[0])
								v15 = v11 + 9;
							v18 = *v15;
							result = sub_140770E90((__int64)v11);
							if (*(_QWORD*)result)
								result = sub_140103E60(
									*(_QWORD**)result,
									&v22,
									&v18,
									0,
									COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(result + 8)) * *(float*)(result + 12)));
							v16 = v11[2].m128_u64[0];
							if (v16)
							{
								v19 = xmmword_140C777D0;
								v20 = xmmword_140B7B240;
								result = (*(__int64(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
									qword_140C65680,
									v16,
									0i64,
									-1i64,
									&v22,
									5,
									&v20,
									&v19,
									1);
							}
							goto LABEL_22;
						}
						if ((result & 8) != 0)
						{
							v13 = 1i64;
							goto LABEL_16;
						}
						if ((result & 4) != 0)
						{
							v13 = 0i64;
							goto LABEL_16;
						}
					}
				}
			}
		LABEL_22:
			++v8;
		} while (v8 < a1[50].m128_u64[1]);
	}
	return result;
}
// 140B4F258: using guessed type float flt_140B4F258[4];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140773080: using guessed type char var_68[16];

