//----- (000000014003ADD0) ----------------------------------------------------
int* __fastcall sub_14003ADD0(_QWORD* a1, int* a2, unsigned __int64 a3)
{
	__int64 v5; // rbx
	unsigned __int64 v6; // rdx
	int* v7; // rax
	int* v8; // rax
	int* result; // rax
	unsigned __int64 v10; // rax
	int* v11; // rcx
	bool v12; // cf
	int* v13; // rax

	v5 = (__int64)a1;
	if (!a2)
		goto LABEL_13;
	v6 = a1[3];
	v7 = v6 < 0x10 ? (int*)a1 : (int*)*a1;
	if (a2 < v7)
		goto LABEL_13;
	if (v6 >= 0x10)
		a1 = (_QWORD*)*a1;
	if ((int*)((char*)a1 + *(_QWORD*)(v5 + 16)) > a2)
	{
		if (v6 < 0x10)
			v8 = (int*)v5;
		else
			v8 = *(int**)v5;
		return sub_14003ABB0((int*)v5, (int*)v5, (char*)a2 - (char*)v8, a3);
	}
	else
	{
	LABEL_13:
		if (a3 == -1i64)
			sub_1407DB420("string too long");
		v10 = *(_QWORD*)(v5 + 24);
		if (v10 >= a3)
		{
			if (!a3)
			{
				*(_QWORD*)(v5 + 16) = 0i64;
				if (v10 < 0x10)
				{
					result = (int*)v5;
					*(_BYTE*)v5 = 0;
				}
				else
				{
					**(_BYTE**)v5 = 0;
					return (int*)v5;
				}
				return result;
			}
		}
		else
		{
			sub_14003ACE0(v5, a3, *(_QWORD*)(v5 + 16));
		}
		if (a3)
		{
			if (*(_QWORD*)(v5 + 24) < 0x10ui64)
				v11 = (int*)v5;
			else
				v11 = *(int**)v5;
			sub_1407DB590(v11, a2, a3);
			v12 = *(_QWORD*)(v5 + 24) < 0x10ui64;
			*(_QWORD*)(v5 + 16) = a3;
			if (v12)
				v13 = (int*)v5;
			else
				v13 = *(int**)v5;
			*((_BYTE*)v13 + a3) = 0;
		}
		return (int*)v5;
	}
}
// 14003AEBE: conditional instruction was optimized away because rdi.8!=0

