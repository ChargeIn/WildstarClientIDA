//----- (00000001402D2330) ----------------------------------------------------
__int64 __fastcall sub_1402D2330(__int64 a1)
{
	_QWORD* v1; // rbx
	int v3[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_QWORD**)(a1 + 24);
	v3[0] = -1;
	if (*v1)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v1 + 32i64))(*v1, v3))
		{
			sub_1402D3300(v1);
			if (*v1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
				*v1 = 0i64;
			}
		}
	}
	return v1[2];
}
// 1402D2330: using guessed type int var_18[6];

