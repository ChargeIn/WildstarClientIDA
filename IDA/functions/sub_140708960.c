//----- (0000000140708960) ----------------------------------------------------
__int64 __fastcall sub_140708960(__int64 a1)
{
	__int64* v1; // rax
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rcx
	char v8; // [rsp+38h] [rbp+10h] BYREF

	v1 = (__int64*)sub_140417660(a1, 1);
	if (v1)
	{
		v2 = *v1;
		if (*v1)
			v2 = *(_QWORD*)v2;
		if (v2)
		{
			v3 = (int*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 32i64))(v2, &v8);
			v5 = sub_1404528B0(v4, v3, 1);
			sub_140452A30(v6, v5, v2);
		}
	}
	return 0i64;
}
// 14070899C: variable 'v4' is possibly undefined
// 1407089A6: variable 'v6' is possibly undefined

