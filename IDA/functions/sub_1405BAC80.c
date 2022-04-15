//----- (00000001405BAC80) ----------------------------------------------------
void __fastcall sub_1405BAC80(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	unsigned __int64 v3; // rdi
	__int64 v5; // rax
	__int64 v7; // rcx
	__int64 v8; // r14
	_QWORD* v9; // rax
	int* v10; // rax
	void(__fastcall * **v11)(_QWORD); // rcx
	_QWORD* v12; // rax
	int* v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rax
	int v18; // edx
	unsigned __int64 v19; // rbp
	__int64 v20; // rbx
	__int64 v21; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v22; // [rsp+28h] [rbp-10h]

	v2 = (_QWORD*)(a1 + 1024);
	v3 = 0i64;
	v5 = *(_QWORD*)(a1 + 1024);
	if (v5)
		v7 = *(_QWORD*)(v5 + 16);
	else
		v7 = 0i64;
	if (a2 != v7)
	{
		if (v5)
			v8 = *(_QWORD*)(v5 + 16);
		else
			v8 = 0i64;
		v9 = (_QWORD*)qword_140C65B88;
		if (!qword_140C65B88)
		{
			v10 = sub_14018B280((unsigned int)(qword_140C65B88 + 72), 0);
			if (v10)
				v9 = sub_1405B92D0(v10);
			else
				v9 = 0i64;
			qword_140C65B88 = (__int64)v9;
		}
		sub_1405BC5A0((__int64)v9, v8, (_DWORD*)a1);
		if (a2)
		{
			if (v2)
			{
				if (*v2)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
					*v2 = 0i64;
				}
				*v2 = *(_QWORD*)(a2 + 120);
				v11 = *(void(__fastcall****)(_QWORD))(a2 + 120);
				if (v11)
					(**v11)(v11);
			}
			v12 = (_QWORD*)qword_140C65B88;
			if (!qword_140C65B88)
			{
				v13 = sub_14018B280((unsigned int)(qword_140C65B88 + 72), 0);
				if (v13)
					v12 = sub_1405B92D0(v13);
				else
					v12 = 0i64;
				qword_140C65B88 = (__int64)v12;
			}
			sub_1405BC390((__int64)v12, a2, a1);
		}
		else if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		if ((*(_DWORD*)(a1 + 664) & 0x1000i64) != 0)
		{
			v14 = *(_QWORD**)(a1 + 560);
			v15 = (_QWORD*)*v14;
			if ((_QWORD*)*v14 != v14)
			{
				do
				{
					v16 = v15[2];
					if ((*(_DWORD*)(v16 + 432) & 0x4000000) != 0)
						sub_1400C6B20(v16);
					v15 = (_QWORD*)*v15;
				} while (v15 != *(_QWORD**)(a1 + 560));
			}
			if (a2)
			{
				v17 = *(_QWORD*)(a1 + 664);
				v18 = (v17 & 1) != 0;
				if ((v17 & 2) != 0)
					v18 |= 2u;
				if ((v17 & 0x10) != 0)
					v18 |= 4u;
				if ((v17 & 0x20) != 0)
					v18 |= 8u;
				if ((v17 & 0x40) != 0)
					v18 |= 0x10u;
				if ((v17 & 0x80u) != 0i64)
					v18 |= 0x20u;
				if ((v17 & 0x100) != 0)
					v18 |= 0x40u;
				v22 = 0i64;
				v21 = 0i64;
				sub_1404692D0(a2, v18, &v21);
				v19 = v22;
				v20 = v21;
				if (v22)
				{
					do
						sub_1405BB6C0(a1, *(_QWORD*)(v20 + 8 * v3++));
					while (v3 < v19);
				}
				if (v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			}
		}
	}
}
// 140C65B88: using guessed type __int64 qword_140C65B88;

