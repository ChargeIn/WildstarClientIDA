//----- (000000014071B590) ----------------------------------------------------
__int64 __fastcall sub_14071B590(__int64 a1)
{
	float v2; // xmm0_4
	unsigned int v3; // ebx
	__int64 v4; // r15
	__int64* v5; // rbx
	unsigned int v6; // ecx
	__int64 result; // rax
	unsigned int v8; // edx
	unsigned int v9; // r14d
	__int64 v10; // rcx
	__int64 v11; // rcx
	_DWORD* v12; // r14
	__int64 v13; // r15
	unsigned int v14; // r14d
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned int v18; // [rsp+20h] [rbp-20h] BYREF
	int v19; // [rsp+24h] [rbp-1Ch]
	__int64 v20; // [rsp+28h] [rbp-18h]
	__int64 v21; // [rsp+30h] [rbp-10h]
	__int64 v22; // [rsp+38h] [rbp-8h]

	*(_DWORD*)(a1 + 224) = dword_140C636A8;
	if ((float)*(int*)(a1 + 404) == 0.0 && *(float*)(a1 + 400) == 0.0)
	{
		v2 = *(float*)(a1 + 396);
		if (v2 == 0.0 || v2 == 0.1)
		{
			v3 = 1;
			while ((v3 & 0xFFFFFFFA) == 0 && v3 != 1 || !sub_140640EE0(a1, v3))
			{
				if (++v3 >= 0xA)
					goto LABEL_10;
			}
			v13 = qword_140C65898;
			v14 = *(_DWORD*)(a1 + 392);
			*(_DWORD*)(a1 + 228) = v3;
			if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v13 + 29112) + 408i64))(
				*(_QWORD*)(v13 + 29112),
				v14)
				|| !v14)
			{
				v15 = *(_QWORD*)(v13 + 29112);
				v18 = v14;
				v19 = 0;
				v20 = 1065353216i64;
				v21 = 0i64;
				v22 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, unsigned int*))(*(_QWORD*)v15 + 584i64))(v15, v3, &v18);
			}
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v13 + 29120) + 408i64))(
				*(_QWORD*)(v13 + 29120),
				v14);
			if ((_DWORD)result || !v14)
			{
				v16 = *(_QWORD*)(v13 + 29120);
				v18 = v14;
				v19 = 0;
				v20 = 1065353216i64;
				v21 = 0i64;
				v22 = 0i64;
				result = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*))(*(_QWORD*)v16 + 584i64))(v16, v3, &v18);
			}
			*(_DWORD*)(a1 + 232) = 1;
			return result;
		}
	}
LABEL_10:
	v4 = qword_140C65898;
	v5 = (__int64*)(qword_140C65898 + 29240);
	v6 = 0;
	result = *(_QWORD*)(qword_140C65898 + 29240);
	if (result)
		v6 = *(_DWORD*)(result + 416);
	v8 = *(_DWORD*)(a1 + 416);
	if (v8 >= v6)
	{
		v9 = *(_DWORD*)(a1 + 392);
		if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 29112) + 408i64))(
			*(_QWORD*)(qword_140C65898 + 29112),
			v9)
			|| !v9)
		{
			v10 = *(_QWORD*)(v4 + 29112);
			v18 = v9;
			v19 = 0;
			v20 = 1065353216i64;
			v21 = 0i64;
			v22 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v10 + 584i64))(v10, 4i64, &v18);
		}
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v4 + 29120) + 408i64))(
			*(_QWORD*)(v4 + 29120),
			v9);
		if ((_DWORD)result || !v9)
		{
			v11 = *(_QWORD*)(v4 + 29120);
			v18 = v9;
			v19 = 0;
			v20 = 1065353216i64;
			v21 = 0i64;
			v22 = 0i64;
			result = (*(__int64(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v11 + 584i64))(v11, 4i64, &v18);
		}
		*(_DWORD*)(a1 + 232) = 1;
		*(_DWORD*)(a1 + 228) = 4;
		v12 = (_DWORD*)*v5;
		if (*v5)
		{
			if (!v12[61])
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(*v5);
				if (!*(_DWORD*)(result + 12))
					result = (*(__int64(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v12 + 80i64))(v12, 1i64);
			}
			v12[58] = 0;
		}
		if (*(_QWORD*)(a1 + 424))
			return result;
	LABEL_40:
		*(_QWORD*)(a1 + 424) = v5;
		*(_QWORD*)(a1 + 432) = *v5;
		*v5 = a1;
		result = *(_QWORD*)(a1 + 432);
		if (result)
			*(_QWORD*)(result + 424) = a1 + 432;
		return result;
	}
	if (!*(_DWORD*)(a1 + 252) && !*(_DWORD*)(a1 + 244))
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	if (!*(_QWORD*)(a1 + 424))
	{
		if (result)
		{
			do
			{
				v17 = *v5;
				if ((int)(v8 - *(_DWORD*)(*v5 + 416)) >= 0)
					break;
				v5 = (__int64*)(v17 + 432);
			} while (*(_QWORD*)(v17 + 432));
		}
		goto LABEL_40;
	}
	return result;
}
// 14071B603: variable 'a1' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

