//----- (0000000140277280) ----------------------------------------------------
__int64 __fastcall sub_140277280(_QWORD* a1, void(__fastcall*** a2)(__int64, void*, __int64*), _QWORD* a3)
{
	void(__fastcall * *v3)(__int64, void*, __int64*); // rax
	unsigned int v7; // edi
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	v3 = *a2;
	v7 = 0;
	v14 = 0i64;
	(*v3)((__int64)a2, &unk_140B611E0, &v14);
	v8 = sub_1402773E0((__int64)a1, 1);
	if (v8 < 0)
		goto LABEL_16;
	v9 = a1[1073];
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		a1[1073] = 0i64;
	}
	if ((void(__fastcall***)(__int64, void*, __int64*))a1[790] != a2)
	{
		((void(__fastcall*)(void(__fastcall***)(__int64, void*, __int64*)))(*a2)[1])(a2);
		v10 = a1[790];
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		a1[790] = a2;
	}
	v11 = v14;
	if (a1[791] != v14)
	{
		if (v14)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			v11 = v14;
		}
		v12 = a1[791];
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
			v11 = v14;
		}
		a1[791] = v11;
	}
	v8 = (*(__int64(__fastcall**)(_QWORD*, _QWORD*, _QWORD*))(*a1 + 48i64))(a1, a3, a1 + 1073);
	if (v8 < 0
		|| (a1[7] = *a3,
			a1[8] = a3[1],
			a1[9] = a3[2],
			a1[10] = a3[3],
			a1[11] = a3[4],
			v8 = sub_1402773E0((__int64)a1, 2),
			v8 < 0))
	{
	LABEL_16:
		v7 = v8;
	}
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
	return v7;
}

