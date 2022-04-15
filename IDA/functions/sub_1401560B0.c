//----- (00000001401560B0) ----------------------------------------------------
__int64 sub_1401560B0()
{
	unsigned int v0; // ebx
	LPVOID ppv; // [rsp+30h] [rbp-88h] BYREF
	__int64 v3; // [rsp+38h] [rbp-80h] BYREF
	int v4[24]; // [rsp+40h] [rbp-78h] BYREF

	v0 = 0;
	if (CoCreateInstance(&stru_1409C6440, 0i64, 1u, &stru_140B5C758, &ppv) >= 0)
	{
		if ((**(int(__fastcall***)(LPVOID, void*, __int64*))ppv)(ppv, &unk_140B5C768, &v3) >= 0)
		{
			if ((*(int(__fastcall**)(__int64, void*, int*))(*(_QWORD*)v3 + 80i64))(v3, &unk_1409C6510, v4) >= 0)
				v0 = v4[0] & 1;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
		}
		(*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
	}
	return v0;
}
// 1401560B0: using guessed type int var_78[24];

