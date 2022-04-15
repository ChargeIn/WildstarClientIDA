#include "../winhttp.h"

//----- (000000014046AFC0) ----------------------------------------------------
void __fastcall sub_14046AFC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	unsigned int* v5; // rdx
	unsigned int v6; // r9d
	unsigned int v7; // ebx
	unsigned int v8; // r9d
	unsigned int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int v12; // esi
	__int64 v13; // rax
	int* v14; // r14
	unsigned int* v15; // rax
	int v16; // ebx
	int v17; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v19; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v21[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v22; // [rsp+88h] [rbp+10h] BYREF

	if (a2)
	{
		v3 = a2;
		if (!a3 || (v5 = *(unsigned int**)(a2 + 112), v6 = v5[6], ((v6 - 2) & 0xFFFFFFFA) != 0) || v6 == 3)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) == a1)
			{
				v10 = *(_QWORD*)(qword_140C65898 + 28048);
				if (v10)
					v3 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v10 + 24i64))(v10, v3, a1, a3);
			}
		}
		else
		{
			v7 = *(_DWORD*)(a3 + 108);
			if (!v7)
				v7 = *v5;
			v8 = v6 - 2;
			if (v8)
			{
				v9 = v8 - 4;
				if (v9)
				{
					if (v9 == 1
						&& !v5[97]
						&& (*(_QWORD*)(qword_140C65898 + 120) != a1 || !(unsigned int)sub_1403BF9D0(a1, *v5, a3)))
					{
						return;
					}
				}
				else
				{
					v7 = *v5;
				}
			}
			else if (!v5[97])
			{
				return;
			}
			v3 = sub_1403ACD90(qword_140C65B70, v7, a1);
			if (!v3)
				return;
		}
		v11 = *(_QWORD*)(v3 + 112);
		if (*(_DWORD*)(v11 + 36) <= 1u)
		{
			v12 = *(_DWORD*)(v11 + 40);
			if (v12)
			{
				v13 = sub_14023DC80(v12);
				v14 = (int*)v13;
				if (v13)
				{
					v17 = sub_14046A760(a1, v12, *(_DWORD*)(v13 + 4));
					sub_14046A3D0(a1, 0, 0, *v14, v17);
				}
				else
				{
					v19 = 0i64;
					TlsValue = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v15 = *(unsigned int**)(v3 + 112);
					v21[0] = (__int64)TlsValue;
					v21[1] = v19;
					v22 = 0x141E02B50i64;
					v21[2] = (__int64)lpTlsValue;
					v16 = sub_1401971E0(&dword_140C8ACE0, 5, &v22, *v15, v12, v21);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v16)
						DebugBreak();
				}
			}
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C8ACE0: using guessed type _DWORD dword_140C8ACE0;

