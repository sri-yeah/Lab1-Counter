// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin2bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin2bcd__Syms.h"
#include "Vbin2bcd___024root.h"

VL_INLINE_OPT void Vbin2bcd___024root___ico_sequent__TOP__0(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->bin2bcd__DOT__result = 0U;
    vlSelf->bin2bcd__DOT__result = ((0xfff00U & vlSelf->bin2bcd__DOT__result) 
                                    | (IData)(vlSelf->x));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    vlSelf->BCD = (0xfffU & (vlSelf->bin2bcd__DOT__result 
                             >> 8U));
}

void Vbin2bcd___024root___eval_ico(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vbin2bcd___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vbin2bcd___024root___eval_act(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_act\n"); );
}

void Vbin2bcd___024root___eval_nba(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_nba\n"); );
}

void Vbin2bcd___024root___eval_triggers__ico(Vbin2bcd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin2bcd___024root___dump_triggers__ico(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG
void Vbin2bcd___024root___eval_triggers__act(Vbin2bcd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin2bcd___024root___dump_triggers__act(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin2bcd___024root___dump_triggers__nba(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG

void Vbin2bcd___024root___eval(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vbin2bcd___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vbin2bcd___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("bin2bcd.sv", 14, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vbin2bcd___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbin2bcd___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbin2bcd___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("bin2bcd.sv", 14, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vbin2bcd___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbin2bcd___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("bin2bcd.sv", 14, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbin2bcd___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbin2bcd___024root___eval_debug_assertions(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
