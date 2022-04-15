//----- (00000001408604C0) ----------------------------------------------------
__int64 __fastcall sub_1408604C0(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD*)(a2 + 136); i != *(_QWORD*)(a2 + 144); i += 32i64)
		result = sub_140838E30(qword_140C61BB0, a1, *(_DWORD*)(i + 4));
	return result;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

