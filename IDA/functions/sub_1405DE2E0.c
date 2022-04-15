#include "../winhttp.h"

//----- (00000001405DE2E0) ----------------------------------------------------
void __fastcall sub_1405DE2E0(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // edi
	__int64 v6; // rbx
	char v7; // al
	int* v8; // rax
	__int64 v9; // rdx
	int* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // edi
	__int64 v14; // [rsp+30h] [rbp-18h] BYREF
	__int64 v15; // [rsp+38h] [rbp-10h]

	v3 = 0;
	v6 = a1;
	if (a2 && !(unsigned int)sub_1403E1170(*(_WORD**)(a2 + 8), 7u)
		|| a3 && !(unsigned int)sub_1403E1170(*(_WORD**)(a3 + 8), 7u))
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipResult", byte_1409EA994, 0i64, 37);
	}
	else
	{
		if (a2)
		{
			v7 = sub_14001BE70(v6 + 720, a2);
			a1 = v6 + 688;
			LOBYTE(v3) = v7 == 0;
			if (a2 != v6 + 688)
				sub_14001C480(a1, *(int**)(a2 + 8), *(int**)(a2 + 16));
		}
		if (a3)
		{
			if (v3 || !sub_14001BE70(v6 + 720, a3))
				v3 = 1;
			a1 = v6 + 720;
			if (a3 != v6 + 720)
				sub_14001C480(a1, *(int**)(a3 + 8), *(int**)(a3 + 16));
		}
		if (*(_QWORD*)(v6 + 696) == *(_QWORD*)(v6 + 704))
		{
			v8 = (int*)sub_14034BDD0(a1, 552510);
			v9 = 0i64;
			if (*(_WORD*)v8)
			{
				do
					++v9;
				while (*((_WORD*)v8 + v9));
			}
			sub_14001C480(v6 + 688, v8, (int*)((char*)v8 + 2 * v9));
			v3 = 1;
		}
		if (*(_QWORD*)(v6 + 728) == *(_QWORD*)(v6 + 736))
		{
			v10 = (int*)sub_14034BDD0(a1, 552512);
			v11 = 0i64;
			if (*(_WORD*)v10)
			{
				do
					++v11;
				while (*((_WORD*)v10 + v11));
			}
			sub_14001C480(v6 + 720, v10, (int*)((char*)v10 + 2 * v11));
			v3 = 1;
		}
		v12 = qword_140C65898;
		if (*(_DWORD*)(qword_140C65898 + 31560) == 127)
		{
			v13 = *(_DWORD*)(v6 + 832) | v3;
			*(_DWORD*)(v6 + 832) = 0;
			if (v13)
			{
				v14 = 0i64;
				v15 = 0i64;
				v14 = *(_QWORD*)(v6 + 696);
				v15 = *(_QWORD*)(v6 + 728);
				sub_1403F4740(v12, 0x3B7u, (__int64)&v14);
			}
		}
		else
		{
			*(_DWORD*)(v6 + 832) |= v3;
		}
	}
}
// 1405DE3DE: variable 'a1' is possibly undefined
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 140C65898: using guessed type __int64 qword_140C65898;

