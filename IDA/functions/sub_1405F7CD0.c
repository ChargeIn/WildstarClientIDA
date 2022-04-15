//----- (00000001405F7CD0) ----------------------------------------------------
__int64 __fastcall sub_1405F7CD0(__int64* a1, int a2)
{
	unsigned __int64 v2; // r9
	__int64* v4; // rcx
	unsigned __int64 v5; // r8
	_DWORD* v6; // rax
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v8 = a2;
	v2 = a1[10];
	v4 = a1 + 9;
	v5 = 0i64;
	if (v2)
	{
		v6 = (_DWORD*)*v4;
		while (*v6 != a2)
		{
			++v5;
			++v6;
			if (v5 >= v2)
				goto LABEL_5;
		}
		return 2147500037i64;
	}
	else
	{
	LABEL_5:
		sub_140003460(v4, &v8);
		(*(void(__fastcall**)(__int64*))(*a1 + 344))(a1);
		return 0i64;
	}
}

