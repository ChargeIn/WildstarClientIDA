//----- (0000000140713320) ----------------------------------------------------
unsigned __int64 __fastcall sub_140713320(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v6; // rbx
	int* v7; // rax
	int v8; // r9d
	int v9; // r12d
	int v10; // r15d
	int v11; // ebp
	int v12; // eax
	int v14; // [rsp+50h] [rbp+8h] BYREF
	int i; // [rsp+54h] [rbp+Ch]

	v6 = 0i64;
	v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	v8 = v7[1];
	v9 = v7[3];
	v10 = *v7;
	v11 = v7[2];
	for (i = v8; v8 < v9; i = v8)
	{
		v14 = v10;
		if (v10 < v11)
		{
			do
			{
				if (((*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 104i64))(a1, &v14) & 1) != 0
					|| !(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 136i64))(a1, &v14))
				{
					v8 = i;
					v12 = v14;
				}
				else
				{
					v8 = i;
					v12 = v14;
					if (v6 < a3 && a2)
					{
						*(_DWORD*)(a2 + 8 * v6) = v14;
						*(_DWORD*)(a2 + 8 * v6 + 4) = v8;
					}
					++v6;
				}
				v14 = v12 + 1;
			} while (v12 + 1 < v11);
		}
		++v8;
	}
	return v6;
}

