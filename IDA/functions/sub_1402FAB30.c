//----- (00000001402FAB30) ----------------------------------------------------
int* __fastcall sub_1402FAB30(__int64* a1, int* a2, int a3)
{
	__int64 v3; // rax
	int* result; // rax
	int* v8; // rcx
	_QWORD* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // r14
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx
	int v17; // ecx
	int v18[10]; // [rsp+20h] [rbp-28h] BYREF

	v3 = *a1;
	v18[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v3 + 16))(a1, v18, 0i64))
	{
		result = (int*)(*(__int64(__fastcall**)(__int64*))(*a1 + 1008))(a1);
		if (!(_DWORD)result)
		{
			v11 = a1[135];
			if (a2)
			{
				v12 = 0i64;
				if (*(_WORD*)a2)
				{
					do
						++v12;
					while (*((_WORD*)a2 + v12));
				}
				v13 = sub_14018B280(2 * v12 + 18, 0);
				if (v13)
				{
					*((_QWORD*)v13 + 1) = v12;
					*(_QWORD*)v13 = off_140B55060;
				}
				else
				{
					v13 = 0i64;
				}
				v14 = v13 + 4;
				v15 = 2 * v12;
				sub_1407DB590(v13 + 4, a2, v15);
				*(_WORD*)((char*)v14 + v15) = 0;
				a1[135] = (__int64)v14;
			}
			else
			{
				a1[135] = 0i64;
			}
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			v16 = a1[136];
			if (v16)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
				a1[136] = 0i64;
			}
			result = (int*)*((unsigned int*)a1 + 13);
			*((_DWORD*)a1 + 274) = a3;
			if (((unsigned __int8)result & 0xC) != 0)
			{
				_InterlockedExchange((volatile __int32*)a1 + 13, (unsigned int)result & 0xFFFFFFF3);
				for (result = (int*)a1[152]; result; result = (int*)*((_QWORD*)result + 152))
				{
					v17 = result[13];
					if ((v17 & 0x20) == 0)
						break;
					_InterlockedExchange(result + 13, v17 & 0xFFFFFFDF);
				}
			}
		}
	}
	else
	{
		result = sub_14018B280(48i64, 0);
		v8 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v9 = a1 + 9;
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v9;
				*((_QWORD*)result + 3) = *v9;
				*v9 = result;
				v10 = *((_QWORD*)result + 3);
				if (v10)
					*(_QWORD*)(v10 + 16) = v8 + 6;
			}
			result = (int*)off_140B63F48;
			*((_QWORD*)v8 + 4) = a2;
			v8[10] = a3;
			*(_QWORD*)v8 = off_140B63F48;
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B63F48: using guessed type __int64 (__fastcall *off_140B63F48[39])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402FAB30: using guessed type int var_28[10];

