//----- (00000001400C9F70) ----------------------------------------------------
__m128 __fastcall sub_1400C9F70(__int64 a1)
{
	__int128 v1; // xmm0
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rcx
	int v6; // eax
	__int64* v7; // rcx
	__m128d v8; // xmm0
	__m128 result; // xmm0
	__int128 v10; // xmm6
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 288);
	if (v3)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3))
		{
			v4 = *(_QWORD*)(a1 + 288);
			if ((int)sub_1400FB720(v4, L"fOpacity", 3) >= 0)
			{
				v5 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 16i64);
				v6 = *(_DWORD*)(v5 - 8);
				v7 = (__int64*)(v5 - 16);
				if (v6 != 3)
				{
					if (v6 != 4 || !sub_14005AC80((char*)(*v7 + 32), (unsigned __int64*)&v13))
					{
						v8 = 0i64;
						goto LABEL_9;
					}
					v12 = 3;
					v7 = &v11;
					v11 = v13;
				}
				v8 = (__m128d)(unsigned __int64) * v7;
			LABEL_9:
				result = _mm_cvtpd_ps(v8);
				*(_QWORD*)(*(_QWORD*)(v4 + 16) + 16i64) -= 32i64;
				return result;
			}
		}
	}
	*(double*)&v1 = (**(double(__fastcall***)(__int64))(a1 + 624))(a1 + 624);
	v10 = v1;
	*(float*)&v10 = *(float*)&v1 * sub_1400C9C30(a1);
	return (__m128)v10;
}
// 1400CA037: variable 'v1' is possibly undefined
// 140A151D0: using guessed type wchar_t aFopacity[9];

