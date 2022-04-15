//----- (000000014049F4D0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049F4D0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
	unsigned int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdi
	unsigned int v11; // eax
	__int64 v12; // r8
	unsigned int v13; // edx
	__int64 v14; // rax
	__int64 v16; // [rsp+20h] [rbp-18h]

	v7 = 0;
	v8 = sub_1405A8A40(a1, a4);
	v10 = v8;
	if (v8)
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v8 + 8)) == 3)
		{
			v11 = sub_140551840(v10, a5);
		LABEL_15:
			v7 = v11;
			return sub_1404A2090(v9, a3, v7, a6);
		}
		v12 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		v13 = **(_DWORD**)(v10 + 8);
		v14 = *(_QWORD*)(v12 + 8);
		v9 = v12;
		while (v14)
		{
			if (*(_DWORD*)(v14 + 32) < v13)
			{
				v14 = *(_QWORD*)(v14 + 24);
			}
			else
			{
				v9 = v14;
				v14 = *(_QWORD*)(v14 + 16);
			}
		}
		if (v9 == v12 || (v16 = v9, v13 < *(_DWORD*)(v9 + 32)))
			v16 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		if (v16 != v12)
		{
			v9 = v16 + 40;
			if (v16 != -40)
			{
				v11 = sub_1406113B0((__int64*)v9, a5);
				goto LABEL_15;
			}
		}
	}
	return sub_1404A2090(v9, a3, v7, a6);
}
// 14049F5A5: variable 'v9' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

