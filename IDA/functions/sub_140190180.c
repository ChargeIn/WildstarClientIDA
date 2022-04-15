#include "../winhttp.h"

//----- (0000000140190180) ----------------------------------------------------
__int64 __fastcall sub_140190180(__int64 a1, __int64 a2, __int64 a3, char a4)
{
	char* v4; // r12
	_BYTE* v5; // rbx
	_BYTE* v6; // r15
	__int64 v10; // rsi
	_BYTE* v11; // rdi
	int* v12; // rcx
	int* v13; // r9
	__int64 v14; // rdi
	unsigned __int64 v15; // rbx
	unsigned __int64* v16; // rax
	_BYTE* v17; // rax
	unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
	unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
	char v21; // [rsp+88h] [rbp+20h]

	v21 = a4;
	v4 = *(char**)(a2 + 16);
	v5 = *(_BYTE**)(a1 + 16);
	v6 = *(_BYTE**)(a1 + 8);
	v10 = 0i64;
	v11 = sub_140190290(v6, v5, *(char**)(a2 + 8), v4);
	if (v11 != v5)
	{
		v12 = *(int**)(a3 + 16);
		v13 = *(int**)(a3 + 8);
		do
		{
			v14 = v11 - v6;
			v15 = v5 - v6 - v14;
			v16 = &v19;
			v20 = (unsigned __int64)&v4[-*(_QWORD*)(a2 + 8)];
			if (v15 >= v20)
				v16 = &v20;
			v19 = v15;
			sub_140190360(a1, (int*)&v6[v14], (int*)&v6[*v16 + v14], v13, v12);
			v6 = *(_BYTE**)(a1 + 8);
			v4 = *(char**)(a2 + 16);
			v5 = *(_BYTE**)(a1 + 16);
			++v10;
			v17 = sub_140190290(&v6[*(_QWORD*)(a3 + 16) - *(_QWORD*)(a3 + 8) + v14], v5, *(char**)(a2 + 8), v4);
			v12 = *(int**)(a3 + 16);
			v13 = *(int**)(a3 + 8);
			v11 = v17;
		} while (v17 != v5);
	}
	return v10;
}

