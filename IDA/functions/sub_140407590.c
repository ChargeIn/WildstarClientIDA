//----- (0000000140407590) ----------------------------------------------------
unsigned __int64 __fastcall sub_140407590(__int64* a1, int* a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // rdi
	unsigned __int64 v4; // r8
	unsigned int v6; // r11d
	unsigned __int64 result; // rax
	__int64 v8; // r10
	unsigned int v9; // edx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rdx

	v2 = a1[1];
	v3 = *a1;
	v4 = 0i64;
	if (v2)
	{
		v6 = *a2;
		while (1)
		{
			result = v4 + ((v2 - v4) >> 1);
			v8 = *(_QWORD*)(v3 + 8 * result);
			v9 = **(_DWORD**)(v8 + 8);
			if (v9 < v6)
				break;
			if (v9 <= v6)
			{
				v10 = *(_QWORD*)(v8 + 16);
				v11 = *((_QWORD*)a2 + 1);
				if (v10 < v11)
					break;
				if (v10 <= v11)
					return result;
			}
			v2 = v4 + ((v2 - v4) >> 1);
		LABEL_9:
			if (v4 >= v2)
				return v4;
		}
		v4 = result + 1;
		goto LABEL_9;
	}
	return v4;
}

