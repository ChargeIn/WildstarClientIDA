//----- (00000001407DC308) ----------------------------------------------------
__int64 __fastcall sub_1407DC308(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
	__int64(__fastcall * v9)(__int64, __int64, __int64, _QWORD); // rax

	v9 = (__int64(__fastcall*)(__int64, __int64, __int64, _QWORD))DecodePointer(qword_140C5F558);
	if (!v9)
	{
		sub_1407DC390();
		JUMPOUT(0x1407DC36Ci64);
	}
	return v9(a1, a2, a3, a4);
}
// 1407DC367: control flows out of bounds to 1407DC36C

