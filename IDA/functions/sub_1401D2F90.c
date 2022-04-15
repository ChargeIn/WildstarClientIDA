//----- (00000001401D2F90) ----------------------------------------------------
__int64 __fastcall sub_1401D2F90(__int64 a1, unsigned int a2, unsigned int* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // rax
	unsigned __int64 v8; // rdi
	__int64 v9; // rax
	__int64 v11; // [rsp+20h] [rbp-48h] BYREF
	__int64 v12[2]; // [rsp+28h] [rbp-40h] BYREF
	int v13; // [rsp+38h] [rbp-30h]

	v3 = *(_QWORD*)(a1 + 640);
	v4 = *(_QWORD*)(a1 + 752);
	v8 = v3 + a2;
	if (v4 >= v3 && v4 < v8)
	{
		if (!v4 && a1 != -760)
		{
			*(_QWORD*)(a1 + 780) = 0i64;
			*(_WORD*)(a1 + 788) = 0;
			*(_DWORD*)(a1 + 760) = 1732584193;
			*(_DWORD*)(a1 + 764) = -271733879;
			*(_DWORD*)(a1 + 768) = -1732584194;
			*(_DWORD*)(a1 + 772) = 271733878;
			*(_DWORD*)(a1 + 776) = -1009589776;
			*(_QWORD*)(a1 + 856) = 0i64;
		}
		v9 = *(_QWORD*)(a1 + 752);
		if (v8 != v9)
			sub_1401C8C20(a1 + 760, (_BYTE*)(v9 + *(_QWORD*)(a1 + 648) - v3), v8 - v9);
		*(_QWORD*)(a1 + 752) = v8;
		if (v8 == *(_QWORD*)(a1 + 712))
		{
			if (a1 != -760)
				sub_1401C8B70(a1 + 760, (__int64)v12);
			if (v12[0] != *(_QWORD*)(a1 + 720) || v12[1] != *(_QWORD*)(a1 + 728) || v13 != *(_DWORD*)(a1 + 736))
			{
				v11 = 0x141D44FF0i64;
				sub_1401A3130(3, 0, &v11, a1 + 24);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 744) + 72i64))(*(_QWORD*)(a1 + 744));
			}
		}
	}
	*a3 = a2;
	return 0i64;
}

