//----- (0000000140441830) ----------------------------------------------------
void __fastcall sub_140441830(__int64 a1, __int64* a2, _QWORD* a3, _DWORD* a4)
{
	_DWORD* v4; // rbx
	__int64 v6; // rdi
	int* v7; // rax
	_QWORD* v8; // [rsp+40h] [rbp+18h]

	if (a3 != (_QWORD*)a4)
	{
		v8 = a3;
		v4 = a3;
		do
		{
			v6 = *a2;
			v7 = sub_14018B280(32i64, 0);
			if (v7 != (int*)-16i64)
			{
				v7[4] = v4[4];
				v7[5] = v4[5];
				v7[6] = v4[6];
				v7[7] = v4[7];
			}
			*(_QWORD*)v7 = v6;
			*((_QWORD*)v7 + 1) = *(_QWORD*)(v6 + 8);
			**(_QWORD**)(v6 + 8) = v7;
			*(_QWORD*)(v6 + 8) = v7;
			v4 = (_DWORD*)*v8;
			v8 = v4;
		} while (v4 != a4);
	}
}

