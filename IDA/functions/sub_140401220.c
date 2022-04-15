//----- (0000000140401220) ----------------------------------------------------
__int64 __fastcall sub_140401220(__int64* a1, unsigned int a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64 v4; // rdi
	unsigned __int64 v5; // r9
	unsigned __int64 v7; // r10
	unsigned __int64 v8; // rax
	__int64 v9; // r11
	unsigned int v10; // edx
	unsigned __int64 v11; // rcx
	__int64 result; // rax

	v3 = a1[1];
	v4 = *a1;
	v5 = 0i64;
	v7 = v3;
	if (v3)
	{
		while (1)
		{
			v8 = v5 + ((v7 - v5) >> 1);
			v9 = *(_QWORD*)(v4 + 8 * v8);
			v10 = **(_DWORD**)(v9 + 8);
			if (v10 < a2)
				break;
			if (v10 <= a2)
			{
				v11 = *(_QWORD*)(v9 + 16);
				if (v11 < a3)
					break;
				if (v11 <= a3)
					goto LABEL_10;
			}
			v7 = v5 + ((v7 - v5) >> 1);
		LABEL_8:
			if (v5 >= v7)
				goto LABEL_9;
		}
		v5 = v8 + 1;
		goto LABEL_8;
	}
LABEL_9:
	v8 = v5;
LABEL_10:
	if (v8 >= v3)
		return 0i64;
	result = *(_QWORD*)(v4 + 8 * v8);
	if (**(_DWORD**)(result + 8) != a2 || *(_QWORD*)(result + 16) != a3)
		return 0i64;
	return result;
}

