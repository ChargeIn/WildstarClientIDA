//----- (00000001404818E0) ----------------------------------------------------
__int64 __fastcall sub_1404818E0(__int64 a1, unsigned int** a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v7; // rax
	_DWORD** v8; // rax
	__int64 v9; // rcx

	v3 = qword_140C65968;
	v7 = sub_140491C60(qword_140C65968, **a2);
	if (v7
		&& (v8 = (_DWORD**)sub_140491BD0(v3, *(_DWORD*)(*(_QWORD*)v7 + 32i64))) != 0i64
		&& (v9 = *(_QWORD*)(a1 + 88), **v8 == ***(_DWORD***)(v9 + 72))
		&& !sub_140489580(v9, **a2))
	{
		return sub_1403D7C30((__int64)a2, a3, 0);
	}
	else
	{
		return 0i64;
	}
}
// 140C65968: using guessed type __int64 qword_140C65968;

