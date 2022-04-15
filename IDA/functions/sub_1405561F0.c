//----- (00000001405561F0) ----------------------------------------------------
void __fastcall sub_1405561F0(__int64 a1, __int64 a2)
{
	int v2; // esi
	__int64 v4; // rax
	__int64 v5; // rbx
	int v6; // eax
	_QWORD* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // [rsp+40h] [rbp-A8h] BYREF
	__int64 v16; // [rsp+48h] [rbp-A0h]
	__int64 v17; // [rsp+60h] [rbp-88h] BYREF
	__int64 v18; // [rsp+68h] [rbp-80h]
	__int64 v19; // [rsp+80h] [rbp-68h] BYREF
	__int64 v20; // [rsp+88h] [rbp-60h]
	_QWORD v21[4]; // [rsp+A0h] [rbp-48h] BYREF
	_QWORD v22[5]; // [rsp+C0h] [rbp-28h] BYREF

	v2 = *(_DWORD*)(a2 + 432);
	if (v2)
	{
		v4 = sub_1405A8A40(a1, v2);
		v5 = v4;
		if (v4)
		{
			v6 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v4 + 8));
			if (v6)
			{
				if (v6 <= 0)
					return;
				if (v6 <= 2)
				{
					v13 = sub_1405582B0(a1, &v17, 8, v5, 1, 0);
					sub_1405564F0(a1, 1, (int*)v13[1], 8, v2, 0, 0);
					if (v18)
						sub_14018B900(v18, 0);
					v14 = sub_1405582B0(a1, v21, 12, v5, 1, 0);
					sub_1405564F0(a1, 4, (int*)v14[1], 9, v2, 0, 0);
					v12 = v21[1];
				LABEL_13:
					if (v12)
						sub_14018B900(v12, 0);
					return;
				}
				if (v6 > 7)
					return;
			}
			if ((unsigned int)sub_140552550(v5, -8193))
				return;
			v7 = sub_1405582B0(a1, &v15, 6, v5, 0, 0);
			sub_1405564F0(a1, 1, (int*)v7[1], 6, v2, 0, 0);
			if (v16)
				sub_14018B900(v16, 0);
			v8 = sub_1405582B0(a1, &v19, 11, v5, 0, 0);
			sub_1405564F0(a1, 2, (int*)v8[1], 11, v2, 0, 0);
			v9 = v20;
			if (v20)
				sub_14018B900(v20, 0);
			v10 = sub_14034BDD0(v9, 23966);
			v11 = sub_14018F0E0(v22, (unsigned __int16*)v10);
			sub_1405564F0(a1, 2, (int*)v11[1], 9, v2, 0, 0);
			v12 = v22[1];
			goto LABEL_13;
		}
	}
}
// 140556321: variable 'v9' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

