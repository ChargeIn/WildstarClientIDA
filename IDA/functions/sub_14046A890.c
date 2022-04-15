//----- (000000014046A890) ----------------------------------------------------
__int64 __fastcall sub_14046A890(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v7; // rdi
	int v8; // ebx
	__int64 v9; // r8
	_DWORD* v10; // rdx
	unsigned __int64 v11; // rcx
	_DWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // eax

	if (!*(_QWORD*)(a1 + 5656))
		return a3;
	v7 = 0i64;
	v8 = a3;
	do
	{
		v9 = *(_QWORD*)(a1 + 5648);
		v10 = *(_DWORD**)(v9 + 8 * v7);
		if (*v10)
		{
			switch (*v10)
			{
			case 1:
				if (**(_DWORD**)(a2 + 112) != v10[1])
					goto LABEL_29;
				break;
			case 2:
				if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 56i64))(
					qword_140C65B70,
					**(unsigned int**)(a2 + 112),
					*(unsigned int*)(*(_QWORD*)(v9 + 8 * v7) + 4i64)))
					goto LABEL_29;
				break;
			case 3:
				v11 = 0i64;
				v12 = (_DWORD*)(*(_QWORD*)(a2 + 56) + 4i64);
				while (*v12 != v10[1])
				{
					++v11;
					++v12;
					if (v11 >= 3)
						goto LABEL_29;
				}
				break;
			}
		}
		else if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 4i64) != v10[1])
		{
			goto LABEL_29;
		}
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 8 * v7);
		v14 = *(_DWORD*)(v13 + 8);
		if (!v14)
		{
			v17 = (int)(float)((float)(int)a3 * *(float*)(v13 + 12));
			if (v17 > a3)
				v17 = a3;
		LABEL_28:
			v8 = v17;
			goto LABEL_29;
		}
		v15 = v14 - 1;
		if (!v15)
		{
			v8 = (int)(float)((float)v8 * *(float*)(v13 + 12));
			goto LABEL_29;
		}
		v16 = v15 - 1;
		if (!v16)
		{
			v17 = v8 + (int)*(float*)(v13 + 12);
			if (v17 < 0)
			{
				v8 = 0;
				goto LABEL_29;
			}
			goto LABEL_28;
		}
		if (v16 == 1)
			v8 = (int)*(float*)(v13 + 12);
	LABEL_29:
		++v7;
	} while (v7 < *(_QWORD*)(a1 + 5656));
	return (unsigned int)v8;
}
// 14046A8CC: conditional instruction was optimized away because rax.8!=0
// 140C65B70: using guessed type __int64 qword_140C65B70;

