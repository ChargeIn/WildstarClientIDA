//----- (00000001407899C0) ----------------------------------------------------
__int64 __fastcall sub_1407899C0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+2Ch] [rbp-1Ch]
	__int64 v9; // [rsp+34h] [rbp-14h]
	int v10; // [rsp+3Ch] [rbp-Ch]

	result = (unsigned int)(*(_DWORD*)(a1 + 80) - 6);
	if ((unsigned int)result <= 1)
	{
		v3 = *(_QWORD*)(a1 + 24);
		if (*(_QWORD*)(*(_QWORD*)(v3 + 1424) + 2896i64) || *(_QWORD*)(v3 + 1224) != a1)
		{
			v5 = *(_QWORD*)(a1 + 88);
			v6 = 1115i64;
			v8 = 0i64;
			v9 = 0i64;
			v10 = 0;
			v7 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v6);
			*(_DWORD*)(a1 + 80) = 8;
		}
		else
		{
			v4 = *(_QWORD*)(a1 + 88);
			v6 = 1116i64;
			v8 = 0i64;
			v9 = 0i64;
			v10 = 0;
			v7 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v6);
			*(_DWORD*)(a1 + 80) = 9;
		}
	}
	return result;
}

