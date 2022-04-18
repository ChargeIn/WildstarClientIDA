#include "../winhttp.h"

//----- (000000014043C700) ----------------------------------------------------
void __fastcall sub_14043C700(__int64 a1, __int64 a2)
{
	int v2; // esi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned int v6; // ebp
	int v7; // edi
	__int64 v8; // r14
	int v9; // ebp
	__int64 v10; // rax
	int v11; // ecx
	unsigned __int64 v12; // rbp
	__int64 v13; // r14
	__int64 v14; // r14
	__int64 v15; // rdi
	__int64 v16; // rax
	unsigned int* v17; // rax
	unsigned __int64 v18; // r15
	__int64 v19; // r14
	__int64 v20; // r14
	__int64 v21; // rdi
	__int64 v22; // rax

	v2 = 0;
	v3 = a2;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4 || *(_DWORD*)(v4 + 592))
		return;
	if (!a2)
	{
		v5 = qword_140C7CC78;
		if (*(_QWORD*)v5 != v5 && *(float*)&dword_140C7CD6C > 0.0)
		{
			v2 = *(_DWORD*)(*(_QWORD*)qword_140C7CC78 + 24i64);
			v6 = *(_DWORD*)(*(_QWORD*)qword_140C7CC78 + 64i64);
		LABEL_44:
			if ((v2 || v6) && (!(_DWORD)qword_140C7DC60 || dword_140C7DC68 != v2 || (_DWORD)qword_140C7DC74 != v6))
			{
				sub_140554580(v5, v2, v6);
				if (dword_140C7DC68)
				{
					dword_140C7CD6C = 0;
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Communicator_EndIncoming", &unk_1409D0B07);
				}
			}
			return;
		}
		v7 = 0;
		v8 = *(_QWORD*)qword_140C65B80;
		v9 = *(_DWORD*)(*(_QWORD*)qword_140C65B80 + 16i64);
		if (v9 <= 0)
		{
		LABEL_14:
			if (*(_QWORD*)v5 == v5)
				return;
			v2 = *(_DWORD*)(*(_QWORD*)v5 + 24i64);
			v6 = *(_DWORD*)(*(_QWORD*)v5 + 64i64);
			goto LABEL_44;
		}
		while (1)
		{
			v10 = sub_1405FC730(v8, v7);
			v3 = v10;
			if (v10)
			{
				if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v10 + 8)) == 2)
				{
					v11 = *(_DWORD*)(*(_QWORD*)(v3 + 8) + 12i64);
					if ((v11 & 8) != 0 || (v11 & 0x10000) != 0)
						break;
				}
			}
			if (++v7 >= v9)
			{
				v5 = qword_140C7CC78;
				goto LABEL_14;
			}
		}
	}
	if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v3 + 8)) == 2)
	{
		v5 = *(unsigned int*)(*(_QWORD*)(v3 + 8) + 12i64);
		if ((v5 & 8) != 0 || (v5 & 0x10000) != 0)
		{
			v12 = *(_QWORD*)(v3 + 144);
			v13 = *(_QWORD*)(qword_140C65898 + 120);
			v14 = v13 ? *(_QWORD*)(v13 + 280) : 0i64;
			if (v14)
			{
				v15 = 0i64;
				if (v12)
				{
					while (1)
					{
						v16 = sub_1404835C0(qword_140C65918, *(_DWORD*)(*(_QWORD*)(v3 + 136) + 4 * v15));
						if (v16)
						{
							if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 48i64))(
								v14,
								*(unsigned int*)(v16 + 132)))
							{
								break;
							}
						}
						if (++v15 >= v12)
							goto LABEL_29;
					}
					v2 = *(_DWORD*)(*(_QWORD*)(v3 + 136) + 4 * v15);
				}
			LABEL_29:
				v17 = *(unsigned int**)(v3 + 8);
				v6 = *v17;
				if ((v17[3] & 0x10000) == 0 || (unsigned int)sub_14043D1F0(v5, v6, v2, 0))
					goto LABEL_44;
			}
		}
	}
	else if (sub_140552FD0(v3))
	{
		v18 = *(_QWORD*)(v3 + 128);
		v6 = **(_DWORD**)(v3 + 8);
		v19 = *(_QWORD*)(qword_140C65898 + 120);
		v20 = v19 ? *(_QWORD*)(v19 + 280) : 0i64;
		if (v20)
		{
			v21 = 0i64;
			if (v18)
			{
				while (1)
				{
					v22 = sub_1404835C0(qword_140C65918, *(_DWORD*)(*(_QWORD*)(v3 + 120) + 4 * v21));
					if (v22)
					{
						if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 48i64))(
							v20,
							*(unsigned int*)(v22 + 132)))
						{
							break;
						}
					}
					if (++v21 >= v18)
						goto LABEL_43;
				}
				v2 = *(_DWORD*)(*(_QWORD*)(v3 + 120) + 4 * v21);
			}
		LABEL_43:
			if (!(unsigned int)sub_14043D650((__int64)dword_140C7CC70, v6, v2, 1))
				goto LABEL_44;
		}
	}
}
// 14043C8BE: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CC78: using guessed type __int64 qword_140C7CC78;
// 140C7CD6C: using guessed type int dword_140C7CD6C;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;

