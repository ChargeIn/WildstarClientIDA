//----- (0000000140865420) ----------------------------------------------------
__int64 __fastcall sub_140865420(__int64 a1, int a2, float a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rbx
	__int64 result; // rax
	_QWORD* v8; // rcx
	int v9; // [rsp+20h] [rbp-38h] BYREF
	__int64 v10; // [rsp+28h] [rbp-30h]
	char v11; // [rsp+30h] [rbp-28h]
	__int64 i; // [rsp+38h] [rbp-20h]
	float v13; // [rsp+40h] [rbp-18h]

	v5 = *(_QWORD*)(a1 + 32);
	result = a5;
	v13 = a3;
	v9 = a2;
	v11 = 0;
	v10 = a4;
	for (i = a5; v5 != *(_QWORD*)(a1 + 40); v5 += 40i64)
	{
		v8 = *(_QWORD**)(v5 + 16);
		if (v8)
		{
			result = v8[7];
			if (result)
			{
				if (*(_WORD*)(result + 72))
					result = (*(__int64(__fastcall**)(_QWORD*, int*))(*v8 + 160i64))(v8, &v9);
			}
		}
	}
	return result;
}

